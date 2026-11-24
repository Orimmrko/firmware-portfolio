#include "../check.h"
#include "bits.h"

int main(void)
{
    printf("single bits\n");
    CHECK_EQ(set_bit(0x00, 3), 0x08);
    CHECK_EQ(set_bit(0x08, 3), 0x08);
    CHECK_EQ(set_bit(0, 31), 0x80000000u);
    CHECK_EQ(clear_bit(0xFF, 0), 0xFE);
    CHECK_EQ(clear_bit(0xFF, 7), 0x7F);
    CHECK_EQ(clear_bit(0x80000000u, 31), 0);
    CHECK_EQ(toggle_bit(0x0F, 4), 0x1F);
    CHECK_EQ(toggle_bit(0x1F, 4), 0x0F);
    CHECK_EQ(test_bit(0x10, 4), 1);
    CHECK_EQ(test_bit(0x10, 3), 0);
    CHECK_EQ(test_bit(0x80000000u, 31), 1);

    printf("fields\n");
    CHECK_EQ(get_field(0xABCD1234u, 8, 8), 0x12);
    CHECK_EQ(get_field(0xABCD1234u, 28, 4), 0xA);
    CHECK_EQ(get_field(0xABCD1234u, 0, 4), 0x4);
    CHECK_EQ(set_field(0x0000, 4, 4, 0xF), 0x00F0);
    CHECK_EQ(set_field(0xFFFF, 4, 4, 0x0), 0xFF0F);
    CHECK_EQ(set_field(0x12345678u, 8, 8, 0xAB), 0x1234AB78u);
    CHECK_EQ(set_field(0, 0, 3, 0xFF), 0x7);   /* extra bits of value are ignored */

    printf("tricks\n");
    CHECK_EQ(clear_lowest_set_bit(0x58), 0x50);
    CHECK_EQ(clear_lowest_set_bit(0), 0);
    CHECK_EQ(count_set_bits(0), 0);
    CHECK_EQ(count_set_bits(0xFF), 8);
    CHECK_EQ(count_set_bits(0xFFFFFFFFu), 32);
    CHECK_EQ(is_power_of_two(1), 1);
    CHECK_EQ(is_power_of_two(64), 1);
    CHECK_EQ(is_power_of_two(0), 0);
    CHECK_EQ(is_power_of_two(96), 0);

    printf("endianness\n");
    CHECK_EQ(is_little_endian(), 1);   /* x86 and ARM Cortex-M are little-endian */

    CHECK_SUMMARY();
}
