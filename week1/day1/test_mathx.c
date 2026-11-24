#include <limits.h>
#include "../check.h"
#include "mathx.h"

int main(void)
{
    printf("clamp\n");
    CHECK_EQ(clamp(5, 0, 10), 5);
    CHECK_EQ(clamp(-3, 0, 10), 0);
    CHECK_EQ(clamp(42, 0, 10), 10);
    CHECK_EQ(clamp(7, 7, 7), 7);
    CHECK_EQ(clamp(-3, 2, 10), 2);      /* below range, lo is not 0 */
    CHECK_EQ(clamp(-50, -10, 10), -10); /* negative range */

    printf("max3\n");
    CHECK_EQ(max3(1, 2, 3), 3);
    CHECK_EQ(max3(9, 2, 3), 9);
    CHECK_EQ(max3(-1, -8, -3), -1);
    CHECK_EQ(max3(4, 4, 4), 4);

    printf("abs_diff\n");
    CHECK_EQ(abs_diff(3, 10), 7);
    CHECK_EQ(abs_diff(10, 3), 7);
    CHECK_EQ(abs_diff(-5, 5), 10);
    CHECK_EQ(abs_diff(INT_MIN, INT_MAX), 4294967295u);
    CHECK_EQ(abs_diff(INT_MAX, INT_MIN), 4294967295u);  /* the other order */

    CHECK_SUMMARY();
}
