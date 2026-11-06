// The header and the module in one translation unit: <stdio.h>'s stdout is the
// stream the module's stdout() returns, read here under another name before the
// macro is undefined.
#include <stdio.h>
#include <errno.h>

static FILE* header_stdout() { return stdout; }
static int* header_errno() { return &errno; }
#undef stdout
#undef errno

import mcpplibs.mwrap.libc;

namespace c = mcpplibs::mwrap::libc::macros;

int main()
{
    const bool same = c::stdout() == header_stdout() && &c::errno() == header_errno();
    std::puts(same ? "header and module agree" : "FAIL");
    return same ? 0 : 1;
}
