######################################################
#	Compiling & other
######################################################

all: bin/main

objects = bin/main.o bin/actor.o

bin/main: $(objects)
	gcc -o bin/main -g -Wall $(objects) -lncurses

bin/main.o: src/main.c
	gcc -c -o bin/main.o -g -Wall src/main.c

bin/actor.o: src/actor.o include/actor.h
	gcc -c -o bin/actor.o -g -Wall src/actor.c

clean: 
	rm -rf bin/*