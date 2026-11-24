CC      = gcc
CFLAGS  = -Wall -Wextra -g -O0

all: app test_mathx

app: main.o mathx.o
	$(CC) $(CFLAGS) -o $@ $^

test_mathx: test_mathx.o mathx.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c mathx.h
	$(CC) $(CFLAGS) -c $<

test: test_mathx
	./test_mathx

clean:
	rm -f *.o app test_mathx

.PHONY: all test clean
