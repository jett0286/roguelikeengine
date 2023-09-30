######################################################
#	Compiling & other
######################################################

all: bin/main

objects = bin/main.o bin/actor.o bin/thing.o

bin/main: $(objects)
	gcc -o bin/main -g -Wall $(objects) -lncurses

bin/main.o: src/main.c include/actor.h include/thing.h
	gcc -c -o bin/main.o -g -Wall src/main.c

bin/actor.o: src/actor.c include/actor.h include/thing.h
	gcc -c -o bin/actor.o -g -Wall src/actor.c

bin/thing.o: src/thing.c include/thing.h
	gcc -c -o bin/thing.o -g -Wall src/thing.c

clean: 
	rm -rf bin/*