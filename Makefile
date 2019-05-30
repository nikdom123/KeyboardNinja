CC = g++
CFLAGS = -Werror -Wall
INCLUDE = -I thirdparty -I src

.PHONY: clean start all test

all: bin/main

bin/main: build/src/main.o build/src/func.o build/src/menu.o build/src/compare.o
	$(CC) $(CFLAGS) -o $@ $^

build/src/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

build/src/func.o: src/func.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

build/src/menu.o: src/menu.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

build/src/compare.o: src/compare.c
	$(CC) $(CFLAGS) -c -o $@ $<

test: bin/test

bin/test: build/test/main.o build/test/compare.o
	gcc -o $@ $^

build/test/main.o: test/main.c
	gcc $(INCLUDE) $(CFLAGS) -c -o $@ $<

build/test/compare.o: src/compare.c
	gcc $(INCLUDE) $(CFLAGS) -c -o $@ $<

start: bin/main
	bin/main

clean:
	rm -rf build/src/*.o build/test/*.o
