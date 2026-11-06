#!/usr/bin/env python3
"""Write, or with --check audit, the macro mapping of the C standard library.

tools/iso_c.toml lists the object-like macros of ISO C17 by header. Each is
mapped into mcpplibs::mwrap::libc::macros under its own name, wherever the
target's C library defines it (`#ifdef`, so that an optional macro such as
FE_UPWARD or FP_FAST_FMA is mapped where it exists):

  a constant expression        `inline constexpr`, equal to the macro
  anything else                a constexpr function returning the macro's
                               expression, `decltype(auto)`: errno() is the
                               int lvalue, stdout() the stream

Whether a macro is a constant is read on `generated-on` by compiling it with
the flags of the last LLVM `mcpp build` (target/**/compile_commands.json);
tools/surface.toml names the macros that are constants there and not on
another target, which take the function form everywhere. The rendered files
are the same on every host:

  src/macros.cppm      the mapping
  tests/macros.cpp     each mapping against its macro, where the target defines it

--check renders them in memory: on `generated-on` they must be byte-identical;
on every host, each macro classified a constant must be one there.
"""
import argparse
from pathlib import Path
import sys
import tomllib

sys.path.insert(0, str(Path(__file__).resolve().parent))
from api import accepted  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]


def build_flags():
    import json
    databases = sorted((ROOT / 'target').glob('**/compile_commands.json'), key=lambda p: p.stat().st_mtime)
    for database in reversed(databases):
        for entry in json.loads(database.read_text(encoding='utf-8')):
            words = entry.get('arguments') or entry['command'].split()
            if Path(entry['file']).as_posix().endswith('src/macros.cppm') and 'clang' in Path(words[0]).name:
                flags, rest = [], iter(words[1:])
                for word in rest:
                    if word in ('-I', '-isystem', '-D', '-U', '-isysroot', '-target', '-include', '-imsvc'):
                        flags += [word, next(rest)]
                    elif word in ('-nostdinc++', '-nostdlibinc', '-nostdinc', '--no-default-config') or word.startswith(
                            ('-I', '-isystem', '-D', '-U', '--sysroot=', '--target=', '-fms-')):
                        flags.append(word)
                return words[0], flags
    sys.exit('no LLVM build of src/macros.cppm; run `mcpp build --toolchain llvm@23.1.3` first')


def classify(iso, surface, compiler, flags):
    headers = list(iso['object'])
    names = [n for ms in iso['object'].values() for n in ms]
    defined = accepted(compiler, flags, headers, names, '#ifndef {n}\n#error {n} is not defined\n#endif')
    constant = accepted(compiler, flags, headers, sorted(defined), 'inline constexpr auto mwrap_probe_{i} = ({n});')
    return names, defined, constant - set(surface.get('function', []))


def render(iso, names, constants):
    headers = list(iso['object'])
    includes = '\n'.join(f'#include <{h}>' for h in headers)
    cap = 'mwrap_libc_capture'
    m = ['// mcpplibs.mwrap.libc.macros --- the object-like macros of ISO C17 (ISO/IEC 9899:2018,',
         '// Annex B) under their own names in mcpplibs::mwrap::libc::macros, wherever the target\'s',
         '// C library defines them: a constant expression as an `inline constexpr` equal to the',
         '// macro; anything else (errno, stdout, MB_CUR_MAX …) as a function returning the',
         "// macro's expression. Written by tools/generate.py from tools/iso_c.toml.",
         'module;', includes, '', '// The values, taken under other names while the macros are defined.',
         f'namespace {cap} {{']
    for n in names:
        body = (f'inline constexpr auto value_{n} = ({n});' if n in constants
                else f'constexpr decltype(auto) get_{n}() {{ return ({n}); }}')
        m += [f'#ifdef {n}', body, '#endif']
    m.append('}')
    for n in names:
        m += [f'#ifdef {n}', f'#undef {n}', f'#define MWRAP_LIBC_HAS_{n}', '#endif']
    m += ['', 'export module mcpplibs.mwrap.libc.macros;', '', 'export namespace mcpplibs::mwrap::libc::macros {']
    for n in names:
        body = (f'inline constexpr auto {n} = {cap}::value_{n};' if n in constants
                else f'constexpr decltype(auto) {n}() {{ return {cap}::get_{n}(); }}')
        m += [f'#ifdef MWRAP_LIBC_HAS_{n}', body, '#endif']
    m.append('}')

    t = ['// Each mapping of mcpplibs.mwrap.libc.macros equals its macro, where the target defines',
         '// it. A macro expands even in a qualified name, so the values of the headers are taken',
         '// under other names and the macros undefined before the mapped names are used. Written',
         '// by tools/generate.py.', includes, '', 'namespace header {']
    for n in names:
        body = (f'inline constexpr auto value_{n} = ({n});' if n in constants
                else f'inline decltype(auto) get_{n}() {{ return ({n}); }}')
        t += [f'#ifdef {n}', body, '#endif']
    t.append('}')
    for n in names:
        t += [f'#ifdef {n}', f'#undef {n}', f'#define MWRAP_LIBC_HAS_{n}', '#endif']
    t += ['', 'import std;', 'import mcpplibs.mwrap.libc.macros;', '', 'namespace m = mcpplibs::mwrap::libc::macros;', '',
          'template <class A, class B>', 'bool same(A&& a, B&& b)', '{',
          '    using T = std::remove_cvref_t<A>;',
          '    if constexpr (std::is_convertible_v<T, const char*>)',
          '        return std::string_view(a) == std::string_view(b);',
          '    else if constexpr (std::is_floating_point_v<T>)',
          '        return (a != a && b != b) || a == b;  // NAN equals NAN here',
          '    else',
          '        return a == b;',
          '}', '',
          '// A function form: an lvalue (errno, stdout) is the same object, a value is equal.',
          'template <class F, class G>',
          'bool same_result(F mapped, G header)',
          '{',
          '    if constexpr (std::is_lvalue_reference_v<decltype(mapped())>)',
          '        return &mapped() == &header();',
          '    else',
          '        return same(mapped(), header());',
          '}', '', 'int main()', '{', '    int mapped = 0, differ = 0;',
          '    auto check = [&](bool ok, std::string_view name) {',
          '        ++mapped;',
          '        if (!ok) { std::println("FAIL {}", name); ++differ; }',
          '    };']
    for n in names:
        if n in constants:
            t += [f'#ifdef MWRAP_LIBC_HAS_{n}', f'    check(same(m::{n}, header::value_{n}), "{n}");', '#endif']
        else:
            t += [f'#ifdef MWRAP_LIBC_HAS_{n}',
                  f'    check(same_result([]() -> decltype(auto) {{ return m::{n}(); }}, header::get_{n}), "{n}");',
                  '#endif']
    t += ['    std::println("{} macros mapped here, {} differ", mapped, differ);', '    return differ != 0;', '}']
    join = lambda lines: '\n'.join(lines) + '\n'
    return {'src/macros.cppm': join(m), 'tests/macros.cpp': join(t)}


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--check', action='store_true', help='audit instead of writing')
    args = parser.parse_args()
    iso = tomllib.loads((ROOT / 'tools/iso_c.toml').read_text(encoding='utf-8'))
    surface = tomllib.loads((ROOT / 'tools/surface.toml').read_text(encoding='utf-8'))
    compiler, flags = build_flags()
    names, defined, constants = classify(iso, surface, compiler, flags)
    host = {'linux': 'linux', 'darwin': 'macos', 'win32': 'windows'}.get(sys.platform, sys.platform)
    problems = []
    if host == surface['generated-on']:
        files = render(iso, names, constants)
        for path, text in files.items():
            target = ROOT / path
            if args.check:
                if not target.exists() or target.read_text(encoding='utf-8') != text:
                    problems.append(f'differs from tools/iso_c.toml: {path}')
            elif not target.exists() or target.read_text(encoding='utf-8') != text:
                target.write_text(text, encoding='utf-8', newline='\n')
    else:
        written = (ROOT / 'src/macros.cppm').read_text(encoding='utf-8')
        classified = {n for n in names if f'inline constexpr auto value_{n} = ' in written}
        problems += [f'a constant on {surface["generated-on"]}, not here: {n}' for n in sorted(classified & defined - constants)]
    for problem in problems:
        print(problem)
    print(f'{host}: {len(names)} ISO C object-like macros, {len(defined)} defined here, '
          f'{len(constants & defined)} constants; {len(problems)} problems')
    return 1 if problems else 0


if __name__ == '__main__':
    sys.exit(main())
