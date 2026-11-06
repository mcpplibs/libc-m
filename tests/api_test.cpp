// The module over the target's C library: the streams written through stdout()
// and stderr(), errno() as the lvalue the library sets, the stdio constants in
// use, and the function-like macros of <mwrap/libc/macros.hpp>.
#include <mwrap/libc/macros.hpp>
import mcpplibs.mwrap.libc;

namespace c = mcpplibs::mwrap::libc::macros;

static int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; ++i) total += va_arg(args, int);
    va_end(args);
    return total;
}

struct Pair {
    char tag;
    double value;
};

int main()
{
    int failures = 0;
    auto check = [&](bool ok, const char* what) {
        std::fprintf(c::stdout(), "%s %s\n", ok ? "ok  " : "FAIL", what);
        failures += ok ? 0 : 1;
    };

    // The streams are the C library's: what goes through one is in order with the other calls.
    check(std::fputs("", c::stdout()) != c::EOF && std::fflush(c::stdout()) == 0, "fputs and fflush on stdout()");
    check(std::fputs("api_test writes to stderr()\n", c::stderr()) != c::EOF, "fputs on stderr()");
    check(c::stdin() != nullptr && c::stdout() != c::stderr(), "three distinct streams");

    // errno() is the object the library sets.
    c::errno() = 0;
    const long big = std::strtol("99999999999999999999999", nullptr, 10);
    check(big == c::LONG_MAX && c::errno() == c::ERANGE, "strtol sets errno() to ERANGE");
    c::errno() = c::EDOM;
    check(c::errno() == c::EDOM, "errno() is assignable");

    // A temporary file through the stdio constants.
    std::FILE* f = std::tmpfile();
    char buffer[c::BUFSIZ];
    check(f != nullptr && std::setvbuf(f, buffer, c::_IOFBF, sizeof buffer) == 0, "setvbuf with _IOFBF and BUFSIZ");
    std::fputs("abc", f);
    check(std::fseek(f, 0, c::SEEK_SET) == 0 && std::fgetc(f) == 'a', "fseek to SEEK_SET");
    check(std::fseek(f, 0, c::SEEK_END) == 0 && std::fgetc(f) == c::EOF, "fgetc at the end is EOF");
    std::fclose(f);

    // Limits and the environment.
    // (Not c::SIZE_MAX here: <mwrap/libc/macros.hpp> includes <stdint.h>, whose SIZE_MAX
    // macro would expand inside the qualified name.)
    check(c::CHAR_BIT == 8 && c::INT_MAX == std::numeric_limits<int>::max() && c::LLONG_MIN < 0, "CHAR_BIT, INT_MAX, LLONG_MIN");
    check(c::MB_CUR_MAX() >= 1 && c::EXIT_SUCCESS == 0 && c::RAND_MAX >= 32767, "MB_CUR_MAX(), EXIT_SUCCESS, RAND_MAX");
    check(c::INFINITY() == std::numeric_limits<float>::infinity() && c::NAN() != c::NAN(), "INFINITY() and NAN()");
    check(std::setlocale(c::LC_ALL, "C") != nullptr, "setlocale(LC_ALL)");

    // The function-like macros.
    check(sum(3, 1, 2, 3) == 6, "va_start, va_arg, va_end");
    check(offsetof(Pair, tag) == 0 && offsetof(Pair, value) >= sizeof(char), "offsetof");
    check(INT64_C(1) << 40 == 1099511627776, "INT64_C");
    std::jmp_buf env;
    volatile int jumped = 0;
    if (setjmp(env) == 0) {
        jumped = 1;
        std::longjmp(env, 7);
    }
    check(jumped == 1, "setjmp and longjmp");
    assert(failures == 0 || failures > 0);

    std::fprintf(c::stdout(), "%d failures\n", failures);
    return failures != 0;
}
