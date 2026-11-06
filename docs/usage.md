# Usage and API

`mcpplibs.mwrap.libc` 17.0.0 maps the object-like macros of ISO C17 for C++
modules. This page lists what the modules hold, how each macro is mapped, and
how the package relates to `std.compat` and to the C headers.

## Modules

| Module | Holds |
|---|---|
| `mcpplibs.mwrap.libc` | `export import std.compat;` (the functions and types of the C library, in `std` and in the global namespace) and `export import mcpplibs.mwrap.libc.macros;` |
| `mcpplibs.mwrap.libc.macros` | in `mcpplibs::mwrap::libc::macros`, every object-like macro of ISO C17 Annex B that the target defines (tools/iso_c.toml lists the 334 names by header) |

## How a macro is mapped

- **A constant expression** is an `inline constexpr` of the same name and
  value: `EOF`, `BUFSIZ`, `SEEK_SET`, `EDOM`, `ERANGE`, `EILSEQ`, `CHAR_BIT`,
  `INT_MAX`, `SIZE_MAX`, the `<float.h>` limits, `PRId64` and the other format
  strings (a `const char*`), `EXIT_SUCCESS`, `LC_ALL`, `SIGINT`, `CLOCKS_PER_SEC` ….
- **Anything else** is a function of the same name, `constexpr` and returning
  the macro's expression (`decltype(auto)`):
  - `errno()` is the C library's error number, an `int&`: `errno() = 0` clears it;
  - `stdin()`, `stdout()`, `stderr()` are the streams (`std::FILE*`);
  - `MB_CUR_MAX()` follows the locale; `SIG_ERR()`, `SIG_IGN()` and
    `FE_DFL_ENV()` are pointers that are not constants where glibc spells them;
  - `INFINITY()`, `NAN()`, `HUGE_VAL()`, `HUGE_VALF()`, `HUGE_VALL()`,
    `math_errhandling()`, `FLT_ROUNDS()` and `FLT_EVAL_METHOD()` are constants
    with some C libraries and not with others (the Windows CRT, macOS), so they
    take the function form everywhere (tools/surface.toml). Where the target
    allows, the call is a constant expression; `std::numeric_limits` gives
    `infinity()` and `quiet_NaN()` as constants on every target.
- **A macro the target does not define** is not mapped there: `FP_FAST_FMA`,
  `FP_FAST_FMAF` and `FP_FAST_FMAL` exist where `fma` is fast, and a `FE_*`
  exception or rounding mode exists where the hardware has it. Test with
  `requires { mcpplibs::mwrap::libc::macros::FP_FAST_FMA(); }`.

tests/macros.cpp compares every mapping with its macro on each target: values
equal, and `errno()` and the streams the same objects.

## What is not mapped

| Macros | Reason |
|---|---|
| `ENOENT`, `EACCES`, `ENOEXEC`, `EPIPE` and the other POSIX error numbers | not ISO C; their values differ between C libraries. `std::errc` names them portably: `std::make_error_code(std::errc::no_such_file_or_directory)` |
| `NULL` | C++ has `nullptr` |
| `<complex.h>`, `<tgmath.h>` | in C++ these headers are C++'s (`std::complex`, the overloads of `<cmath>`) |
| `<iso646.h>`, `<stdalign.h>`, `<stdbool.h>`, `<stdnoreturn.h>` | their macros spell C++ keywords and attributes |
| `<stdatomic.h>`, `<threads.h>` | C++ has `std::atomic` and `std::thread` |
| `fpclassify`, `isnan`, `signbit`, `isgreater` … | functions of `<cmath>` in C++ (`std::isnan`) |
| `__STDC_*` | predefined by the compiler |
| Annex K (`L_tmpnam_s`, `RSIZE_MAX` …) | optional; the C libraries targeted here do not provide it |

## The function-like macros

`assert`, `setjmp`, `va_start`, `va_arg`, `va_copy`, `va_end`, `offsetof` and
`INT8_C` … `UINTMAX_C` take a type or a member name, act at the call site, or
must be macros by the standard. `<mwrap/libc/macros.hpp>` includes the five
headers that define them (`<assert.h>`, `<setjmp.h>`, `<stdarg.h>`,
`<stddef.h>`, `<stdint.h>`), so they are the C library's own. Include it before
the import. Those headers also define object-like macros (`NULL`, `SIZE_MAX`,
`INT64_MAX` …); a macro expands even inside a qualified name, so in such a unit
write `SIZE_MAX`, not `mcpplibs::mwrap::libc::macros::SIZE_MAX`. The same holds
in a unit that includes any C header beside the module (tests/header_mix_test.cpp).

## The implementation

The package has no sources and no dependency: the C library is the target's,
as mcpp selects it (glibc, musl, openkal-musl, the Windows CRT, macOS
libSystem, mingw-w64). The version names the standard: 17.0.0 is ISO/IEC
9899:2018, which C++23 references normatively. A release for C23, when C++
references it, will be 23.0.0.
