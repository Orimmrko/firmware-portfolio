#include "bits.h"

/* Replace each TODO. Use only bitwise operators and shifts where you can. */

uint32_t set_bit(uint32_t x, unsigned pos)    { (void)pos; return x; /* TODO */ }
uint32_t clear_bit(uint32_t x, unsigned pos)  { (void)pos; return x; /* TODO */ }
uint32_t toggle_bit(uint32_t x, unsigned pos) { (void)pos; return x; /* TODO */ }
int      test_bit(uint32_t x, unsigned pos)   { (void)x; (void)pos; return 0; /* TODO */ }

uint32_t get_field(uint32_t x, unsigned pos, unsigned width)
{
    (void)x; (void)pos; (void)width;
    return 0; /* TODO */
}

uint32_t set_field(uint32_t x, unsigned pos, unsigned width, uint32_t value)
{
    (void)pos; (void)width; (void)value;
    return x; /* TODO */
}

uint32_t clear_lowest_set_bit(uint32_t x) { return x; /* TODO */ }
int      count_set_bits(uint32_t x)       { (void)x; return 0; /* TODO */ }
int      is_power_of_two(uint32_t x)      { (void)x; return 0; /* TODO */ }
int      is_little_endian(void)           { return -1; /* TODO */ }
