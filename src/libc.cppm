// mcpplibs.mwrap.libc --- the C standard library as a C++ module: std.compat, which
// declares the functions and types of the C library in std and in the global
// namespace, with the object-like macros of ISO C mapped by
// mcpplibs.mwrap.libc.macros. The implementation is the target's C library.
export module mcpplibs.mwrap.libc;

export import std.compat;
export import mcpplibs.mwrap.libc.macros;
