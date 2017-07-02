all: main

library.o: library.c
	gcc -c library.c

main.o: main.c library.h
	gcc -c main.c

main: main.o library.o
	gcc main.o library.o -o main


