CC = gcc
OPTIONS =  -W -Wall -std=c89 -pedantic -O3

main: index.o affichage.o list_fich.o lecture_image.o main.o
	$(CC) $(OPTIONS) main.o -o main

main.o: main.h main.c
	$(CC) $(OPTIONS) -c main.c

ensemble.o: ensemble.h ensemble.c
	$(CC) $(OPTIONS) -c ensemble.c 
