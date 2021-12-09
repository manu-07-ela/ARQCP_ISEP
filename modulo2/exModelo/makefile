compileAll: main.o calcula_resto.o noves_fora.o
	gcc -c -g -Wall main.c -o main.o
	gcc -c -g -Wall calcula_resto.s -o calcula_resto.o
	gcc -c -g -Wall noves_fora.c -o noves_fora.o

compileTogether: compileAll
	gcc -g -Wall main.o calcula_resto.o noves_fora.o -o mainCompile

run: compileTogether
	./mainCompile