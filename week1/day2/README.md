# Day 2 — bits and bytes

Watch Lecture 02, read CS:APP 2.1, then implement every function in `bits.c`.
The exact rules and examples are in `bits.h`.

```bash
make test       # goal: 28/28 checks passed
```

Rules for yourself:
- Use bitwise operators (`& | ^ ~ << >>`), not loops, except in `count_set_bits`.
- Write `1u << pos`, not `1 << pos`. Find out why with `set_bit(0, 31)`.
- `get_field` and `set_field` are exactly how firmware reads and writes fields
  in hardware registers. You will use them on the board in week 4.

Interview check: explain out loud why `x & (x - 1)` clears the lowest set bit.
