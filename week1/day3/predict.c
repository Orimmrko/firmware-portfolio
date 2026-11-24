#include <stdio.h>
#include <limits.h>
#include <stdint.h>

/* Day 3: BEFORE running this, write your prediction for every line in
   predictions.txt. Then run `make run` and compare. For each one you got
   wrong, write one sentence explaining why. */

int main(void)
{
    int i = -1;
    unsigned u = 1;
    char c = (char)200;
    unsigned char uc = 200;
    short s = -2;

    printf(" 1: %d\n", -1 < 0);
    printf(" 2: %d\n", -1 < 0u);
    printf(" 3: %d\n", i < u);
    printf(" 4: %u\n", (unsigned)i);
    printf(" 5: %d\n", c);
    printf(" 6: %d\n", uc);
    printf(" 7: %d\n", (int)(uint8_t)300);
    printf(" 8: %d\n", s >> 1);
    printf(" 9: %u\n", (unsigned)s >> 1);
    printf("10: %d\n", INT_MAX + 1 < INT_MAX);   /* also read the compiler warning */
    printf("11: %u\n", 0u - 1);
    printf("12: %d\n", (int)sizeof(char) + (int)sizeof(short) + (int)sizeof(int) + (int)sizeof(long));
    printf("13: %d\n", 7 / 2);
    printf("14: %d\n", -7 / 2);
    printf("15: %d\n", -7 % 2);
    printf("16: %d\n", -7 >> 1);
    printf("17: %d\n", 1 << 31 < 0);
    printf("18: %ld\n", (long)(int16_t)0x8000);
    printf("19: %u\n", (uint16_t)-1);
    printf("20: %d\n", (unsigned char)-1 == 255);
    return 0;
}
