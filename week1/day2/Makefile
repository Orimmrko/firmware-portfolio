CC      = gcc
CFLAGS  = -Wall -Wextra -g -O0

test_bits: test_bits.o bits.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c bits.h
	$(CC) $(CFLAGS) -c $<

test: test_bits
	./test_bits

clean:
	rm -f *.o test_bits

.PHONY: test clean
