# Week 1 — assignments

Each day works like HDLBits: the folder has a task, starter code with `TODO`s,
and tests that tell you PASS or FAIL. Watch the day's video first, then:

```bash
cd week1/day2        # the day you're on
make test            # build and run the tests (they fail until you finish)
# edit the .c file, run `make test` again, repeat until everything passes
git add . && git commit -m "week1 day2: bits" && git push
```

| Day | Watch | Do | Done when |
|---|---|---|---|
| 1 | Lecture 01: Course Overview | `day1/` — implement `mathx.c`, then step through `app` in gdb | `make test` shows 12/12 and you did the gdb steps in `day1/README.md` |
| 2 | Lecture 02: Bits, Bytes, and Integers | `day2/` — implement `bits.c` | `make test` shows 28/28 |
| 3 | Lecture 03: Bits, Bytes, and Integers (cont.) | `day3/` — predict 20 results, then run | every wrong prediction has a one-line explanation |
| 4–5 | Recitation 3: Datalab | CMU Data Lab (see the study plan) | `./btest` passes and `./dlc bits.c` is clean |

Videos: https://scs.hosted.panopto.com/Panopto/Pages/Sessions/List.aspx#folderID=%22b96d90ae-9871-4fae-91e2-b1627b43e25e%22
