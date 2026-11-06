// <mwrap/libc/macros.hpp> --- the function-like macros of ISO C17 that no function can
// stand in for: assert (<assert.h>), setjmp (<setjmp.h>), va_start, va_arg, va_copy,
// va_end (<stdarg.h>), offsetof (<stddef.h>), and INT8_C … UINTMAX_C (<stdint.h>).
// They take a type or a member name, act at the call site, or must be macros by the
// standard, so they stay macros, as the target's C library defines them: this header
// includes those five headers. Include it before `import mcpplibs.mwrap.libc;`.
//
// The five headers also define object-like macros (NULL, INT64_MAX …). A macro
// expands even in a qualified name, so in a unit that includes this header use
// those macros themselves, not mcpplibs::mwrap::libc::macros::INT64_MAX.
#ifndef MWRAP_LIBC_MACROS_HPP
#define MWRAP_LIBC_MACROS_HPP

#include <assert.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#endif  // MWRAP_LIBC_MACROS_HPP
