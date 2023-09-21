######################################################
#	I make a da file
#	this file compiles
#	it also does other stuff
#	
######################################################

all: bin/main

bin/main: bin/main.o
	gcc -o bin/main -g -Wall bin/main.o

bin/main.o: src/main.c
	gcc -c -o bin/main.o -g -Wall src/main.c

clean: 
	rm -rf bin/*