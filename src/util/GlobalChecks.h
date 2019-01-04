// Copyright 2014 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#pragma once

namespace tang
{
void assertThreadIsMain();

void dbgAbort();

[[noreturn]] void printErrorAndAbort(const char* s1);
[[noreturn]] void printErrorAndAbort(const char* s1, const char* s2);

#ifdef NDEBUG

#define dbgAssert(expression) ((void)0)

#else

#define dbgAssert(expression) (void)((!!(expression)) || (dbgAbort(), 0))

#endif
}
