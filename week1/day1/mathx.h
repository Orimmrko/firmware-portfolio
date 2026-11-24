#ifndef MATHX_H
#define MATHX_H

/* Return x limited to the range [lo, hi]. Assume lo <= hi. */
int clamp(int x, int lo, int hi);

/* Return the largest of three values. */
int max3(int a, int b, int c);

/* Return the distance between a and b, always >= 0.
   Example: abs_diff(3, 10) == 7, abs_diff(-5, 5) == 10 */
unsigned int abs_diff(int a, int b);

#endif
