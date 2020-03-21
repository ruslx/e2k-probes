CC=gcc
CPP=g++

all: test

test: test.c
	$(CC) -o test test.c

cpp: tst

tst: test.cpp
	$(CPP) -o test test.cpp

s: test.s

test.s:
	$(CC) -S test.c

clean:
	rm -rf test *.s
