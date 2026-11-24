#include <stdio.h>
#include "mathx.h"

/* A small program to step through in gdb. */
int main(void)
{
    int readings[] = { -20, 5, 37, 120, 64 };
    int total = 0;

    for (int i = 0; i < 5; i++) {
        int safe = clamp(readings[i], 0, 100);
        total += safe;
        printf("reading %d -> %d\n", readings[i], safe);
    }
    printf("total = %d, biggest gap = %u\n", total, abs_diff(readings[0], readings[3]));
    return 0;
}
