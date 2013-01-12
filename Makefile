CFLAGS = -Wall -g -DNDEBUG

all: prime
prime: prime.c
clean:
	rm -rf prime