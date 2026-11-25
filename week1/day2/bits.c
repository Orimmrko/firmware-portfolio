#include "bits.h"

/* Replace each TODO. Use only bitwise operators and shifts where you can. */

uint32_t set_bit(uint32_t x, unsigned pos)    { return x | (1U << pos); /* TODO */ }
uint32_t clear_bit(uint32_t x, unsigned pos)  { return x & ~(1U << pos); /* TODO */ }
uint32_t toggle_bit(uint32_t x, unsigned pos) { (void)pos;  return x ^(1U << pos); /* TODO */ }
int      test_bit(uint32_t x, unsigned pos)   { (void)x; (void)pos;
    return (x & (1U << pos)) != 0; }

uint32_t get_field(uint32_t x, unsigned pos, unsigned width)
{
    (void)x; (void)pos; (void)width;
        uint32_t mask = (1U << width) - 1;
    return (x >> pos) & mask;
}

uint32_t set_field(uint32_t x, unsigned pos, unsigned width, uint32_t value)
{
    uint32_t mask = (1U << width) - 1;
    x &= ~(mask << pos);
    return x | ((value & mask) << pos);
}

uint32_t clear_lowest_set_bit(uint32_t x) {  return x & (x - 1); }
int      count_set_bits(uint32_t x)       { (void)x; int count = 0;
    while (x != 0) {
        x &= (x - 1);  // erase the lowest 1 bit
        count++;
    }
    return count; 

}
int      is_power_of_two(uint32_t x)      { (void)x; return (x != 0) && ((x & (x - 1)) == 0); /* TODO */ }
int      is_little_endian(void)           {
    uint32_t x = 1;
    uint8_t *first_byte = (uint8_t *)&x;
    return *first_byte == 1;  }
