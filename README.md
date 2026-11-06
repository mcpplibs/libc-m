# libc

> The C standard library (ISO C17) through C++23 modules, with its macros as C++ names.

**English** · [简体中文](README.zh.md) · [Upstream](https://www.iso.org/standard/74528.html) · [Releases](https://github.com/mcpplibs/libc-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [Index](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/libc-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/libc-m/actions/workflows/ci.yml)

`import std.compat` gives a C++ program the functions and types of the C
library, but not its macros: a named module cannot export one, and `stdout`,
`errno`, `EOF`, `BUFSIZ` and `INT_MAX` are macros in every C library. This
package maps the object-like macros of ISO C17 under their own names. A
constant is an `inline constexpr`; anything else (`stdout`, `errno`,
`MB_CUR_MAX` …) is a function returning the macro's expression. The package
implements nothing: the implementation is the target's C library, and the
version 17.0.0 names the standard (ISO/IEC 9899:2018, which C++23 references).

## Modules

- `import mcpplibs.mwrap.libc;`: `std.compat`, re-exported, and the macros module
- `import mcpplibs.mwrap.libc.macros;`: `stdout()`, `stderr()`, `stdin()`, `errno()`, `EOF`, `BUFSIZ`, `SEEK_SET`, `EDOM`, `ERANGE`, `EILSEQ`, `CHAR_BIT`, `INT_MAX`, `SIZE_MAX`, `DBL_EPSILON`, `PRId64`, `EXIT_FAILURE`, `LC_ALL`, `SIGINT` … in `mcpplibs::mwrap::libc::macros`
- `#include <mwrap/libc/macros.hpp>`: `assert`, `setjmp`, `va_start` … `va_end`, `offsetof`, `INT64_C` …, as the C library defines them

> More Modules API -> [Usage and API](docs/usage.md)

## Getting started

```sh
mcpp new stdio --template mcpplibs.mwrap.libc@17.0.0
cd stdio
mcpp run
```

The default template opens a file with C stdio, reports the C library's
`errno()` and `strerror` when it cannot, and prints a few limits.

```toml
[dependencies]
"mcpplibs.mwrap.libc" = "17.0.0"
```

```cpp
import mcpplibs.mwrap.libc;

namespace c = mcpplibs::mwrap::libc::macros;

int main() {
    std::fprintf(c::stderr(), "BUFSIZ is %d\n", int(c::BUFSIZ));
    c::errno() = 0;
    std::strtol("99999999999999999999", nullptr, 10);
    return c::errno() == c::ERANGE ? c::EXIT_SUCCESS : c::EXIT_FAILURE;
}
```

## What is mapped

Every object-like macro of ISO C17's library summary (Annex B) that the
target defines: 334 names over `<errno.h>`, `<fenv.h>`, `<float.h>`,
`<inttypes.h>`, `<limits.h>`, `<locale.h>`, `<math.h>`, `<signal.h>`,
`<stdint.h>`, `<stdio.h>`, `<stdlib.h>`, `<time.h>` and `<wchar.h>`. A macro the
target leaves out (`FP_FAST_FMA` where `fma` is not fast) is not mapped there.
POSIX names that ISO C does not have (`ENOENT`, `EACCES` …) are not mapped:
`std::errc` gives them portably. `NULL` is `nullptr`. The function-like macros
that no function can replace stay macros in `<mwrap/libc/macros.hpp>`, which
includes the five headers that define them; in a unit that includes it, the
object-like macros of those headers (`SIZE_MAX` …) are active and are used as
macros ([docs/usage.md](docs/usage.md)).

## Build and testing

CI builds and tests on each C library with each C++ standard library mcpp
builds against: glibc with libstdc++ and libc++, musl, openkal-musl (run under
okrun), macOS libSystem, the Windows CRT with libc++ and with the MSVC STL, and
mingw-w64. The tests write through `stdout()` and `stderr()`, read `errno()` as
the C library sets it, use the stdio constants on a temporary file, call the
function-like macros, compare every mapping with its macro on that target,
and mix the header with the module. The mapping audit
([tools/generate.py](tools/generate.py) `--check`) regenerates the mapping from
[tools/iso_c.toml](tools/iso_c.toml) and checks that each macro classified a
constant is one on each LLVM host. A separate job scaffolds the default
template as an installed package and runs it.

## License

[Apache-2.0](LICENSE) for the wrapper, by mcpp-community ([NOTICE](NOTICE)).
The C library of each target remains under its own license.
