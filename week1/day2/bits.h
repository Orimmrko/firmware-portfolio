#ifndef BITS_H
#define BITS_H
#include <stdint.h>

/* Bit positions count from 0 (the least significant bit). Assume pos < 32. */
uint32_t set_bit(uint32_t x, unsigned pos);     /* make bit pos 1        */
uint32_t clear_bit(uint32_t x, unsigned pos);   /* make bit pos 0        */
uint32_t toggle_bit(uint32_t x, unsigned pos);  /* flip bit pos          */
int      test_bit(uint32_t x, unsigned pos);    /* 1 if bit pos is 1, else 0 */

/* A "field" is `width` bits starting at bit `pos`, like a register field.
   Assume 1 <= width <= 31 and pos + width <= 32.
   get_field(0xABCD1234, 8, 8)  == 0x12
   set_field(0x0000, 4, 4, 0xF) == 0x00F0  (only the field changes) */
uint32_t get_field(uint32_t x, unsigned pos, unsigned width);
uint32_t set_field(uint32_t x, unsigned pos, unsigned width, uint32_t value);

uint32_t clear_lowest_set_bit(uint32_t x);  /* 0b1011000 -> 0b1010000 */
int      count_set_bits(uint32_t x);        /* number of 1 bits      */
int      is_power_of_two(uint32_t x);       /* 1 for 1,2,4,8...; 0 for 0 */

/* 1 if this machine stores the least significant byte first, else 0.
   Hint: look at the first byte of a uint32_t through a uint8_t pointer. */
int      is_little_endian(void);

#endif
