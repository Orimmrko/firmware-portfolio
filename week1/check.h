/* Tiny test helper: prints PASS/FAIL per check and a summary, like HDLBits. */
#ifndef CHECK_H
#define CHECK_H
#include <stdio.h>

static int checks_run = 0, checks_failed = 0;

#define CHECK_EQ(expr, expected) do {                                         \
    long long _got = (long long)(expr), _exp = (long long)(expected);         \
    checks_run++;                                                             \
    if (_got == _exp) {                                                       \
        printf("  PASS  %s\n", #expr);                                        \
    } else {                                                                  \
        checks_failed++;                                                      \
        printf("  FAIL  %s\n        expected %lld (0x%llx), got %lld (0x%llx)\n", \
               #expr, _exp, (unsigned long long)_exp,                         \
               _got, (unsigned long long)_got);                               \
    }                                                                         \
} while (0)

#define CHECK_SUMMARY() do {                                                  \
    printf("\n%d/%d checks passed\n", checks_run - checks_failed, checks_run);\
    return checks_failed ? 1 : 0;                                             \
} while (0)

#endif
