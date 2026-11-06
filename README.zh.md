# libc

> C 标准库（ISO C17）以 C++23 模块提供，其宏成为 C++ 名字。

[English](README.md) · **简体中文** · [上游](https://www.iso.org/standard/74528.html) · [发布](https://github.com/mcpplibs/libc-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [索引](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/libc-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/libc-m/actions/workflows/ci.yml)

`import std.compat` 给 C++ 程序提供 C 库的函数与类型，但不提供宏：命名模块不能导出宏，而 `stdout`、`errno`、`EOF`、
`BUFSIZ`、`INT_MAX` 在每个 C 库中都是宏。本包把 ISO C17 的对象宏以原名映射：常量为 `inline constexpr`，其余（`stdout`、
`errno`、`MB_CUR_MAX` 等）为返回宏表达式的函数。本包不实现任何东西：实现是目标的 C 库；版本 17.0.0 指所依据的标准
（ISO/IEC 9899:2018，C++23 规范性引用的版本）。

## 模块

- `import mcpplibs.mwrap.libc;`：重新导出 `std.compat`，以及宏模块
- `import mcpplibs.mwrap.libc.macros;`：`stdout()`、`stderr()`、`stdin()`、`errno()`、`EOF`、`BUFSIZ`、`SEEK_SET`、`EDOM`、`ERANGE`、`EILSEQ`、`CHAR_BIT`、`INT_MAX`、`SIZE_MAX`、`DBL_EPSILON`、`PRId64`、`EXIT_FAILURE`、`LC_ALL`、`SIGINT` 等，位于 `mcpplibs::mwrap::libc::macros`
- `#include <mwrap/libc/macros.hpp>`：`assert`、`setjmp`、`va_start` … `va_end`、`offsetof`、`INT64_C` 等，即 C 库自己的定义

> 更多模块 API -> [用法与 API](docs/usage.md)

## 快速开始

```sh
mcpp new stdio --template mcpplibs.mwrap.libc@17.0.0
cd stdio
mcpp run
```

默认模板用 C stdio 打开一个文件，打不开时报告 C 库的 `errno()` 与 `strerror`，并打印几个极限值。

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

## 映射范围

ISO C17 库摘要（附录 B）中目标所定义的每个对象宏：`<errno.h>`、`<fenv.h>`、`<float.h>`、`<inttypes.h>`、`<limits.h>`、
`<locale.h>`、`<math.h>`、`<signal.h>`、`<stdint.h>`、`<stdio.h>`、`<stdlib.h>`、`<time.h>`、`<wchar.h>` 中共 334 个名字。
目标未定义的宏（例如 `fma` 不快时的 `FP_FAST_FMA`）在该目标上不映射。ISO C 没有的 POSIX 名字（`ENOENT`、`EACCES` 等）
不映射：`std::errc` 可移植地给出它们。`NULL` 即 `nullptr`。无法用函数替代的函数式宏保留在 `<mwrap/libc/macros.hpp>`，
它包含定义这些宏的五个头文件，随后取消定义 ISO C 的全部对象宏，使映射后的名字在该翻译单元中于每种 C 库上都可用
（[docs/usage.md](docs/usage.md)）。

## 构建与测试

CI 在 mcpp 所面向的每种 C 库与每种 C++ 标准库组合上构建并测试：glibc 加 libstdc++ 与 libc++、musl、openkal-musl（经
okrun 运行）、macOS libSystem、Windows CRT 加 libc++ 与 MSVC STL、mingw-w64。测试经 `stdout()` 与 `stderr()` 写出，读取 C 库
设置的 `errno()`，在临时文件上使用 stdio 常量，调用函数式宏，在该目标上比较每个映射与其宏，并混用头文件与模块。映射审计
（[tools/generate.py](tools/generate.py) `--check`）由 [tools/iso_c.toml](tools/iso_c.toml) 重新生成映射，并在每个 LLVM
宿主上检查被归为常量的宏在该宿主上确为常量。另一个作业把默认模板当作已安装的包生成项目并运行。

## 许可

包装部分为 [Apache-2.0](LICENSE)，作者 mcpp-community（[NOTICE](NOTICE)）。各目标的 C 库仍遵循其自身的许可。
