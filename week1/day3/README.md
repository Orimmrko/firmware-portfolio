# Day 3 — integers: signed, unsigned, casts, overflow

Watch Lecture 03, read CS:APP 2.2–2.3.

1. Open `predict.c`. **Without running it**, write your prediction for each
   of the 20 lines in `predictions.txt`.
2. `make run` and compare. Read the compiler warnings too; they are hints.
3. For every wrong prediction, add one sentence to `predictions.txt` explaining why.

Most interview bugs in C come from exactly these rules: comparing signed with
unsigned, sign extension, and shifting negative numbers.
