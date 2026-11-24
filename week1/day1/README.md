# Day 1 — toolchain: gcc, make, gdb

## Part 1: make the tests pass
Open `mathx.c` and replace the three `TODO`s (the rules are in `mathx.h`).

```bash
make test
```
Goal: `12/12 checks passed` and **zero compiler warnings**.
Tricky one: `abs_diff(INT_MIN, INT_MAX)`. Why does `a - b` go wrong there?

## Part 2: drive the program in gdb
```bash
make app
gdb ./app
```
Inside gdb, in this order:
1. `break clamp` then `run` — the program stops inside `clamp`
2. `bt` — see who called it (the call stack)
3. `print x`, `print lo`, `print hi`
4. `finish` — run until `clamp` returns and show the return value
5. `break main.c:12` then `continue` — stop on the `total += safe` line
6. `watch total` then `continue` a few times — gdb stops every time `total` changes
7. `quit`

## Part 3: commit
```bash
git add . && git commit -m "week1 day1: toolchain + gdb" && git push
```
