CC      = gcc
CFLAGS  = -Wall -Wextra -g -O0

predict: predict.c
	$(CC) $(CFLAGS) -o $@ $<

run: predict
	./predict

clean:
	rm -f predict

.PHONY: run clean
