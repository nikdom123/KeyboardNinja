CC = g++
CFLAGS = -Werror -Wall

.PHONY: clean start all

all: bin/main

bin/main: build/main.o build/func.o build/menu.o
	$(CC) $(CFLAGS) -o $@ $^ 

build/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

build/func.o: src/func.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

build/menu.o: src/menu.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

start: bin/main
	bin/main

clean:
	rm build/*