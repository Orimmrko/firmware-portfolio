#include "mathx.h"

int clamp(int x, int lo, int hi)
{
    /* TODO */
    (void)x; (void)lo; (void)hi;
    if (lo <= x && x <= hi) return x;
    if (x>hi) return hi;
    return 0;
}

static int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max3(int a, int b, int c)
{
    return max(a, max(b, c));
}


unsigned int abs_diff(int a, int b)
{
    /* TODO. Careful: a - b can overflow for large values. */
    (void)a; (void)b;
    if (a > b) return a - b;
    else return b - a;
}
