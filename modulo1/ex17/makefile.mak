compileModules: main.c swap.c 
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall swap.c -o swap.o

compileAll: compileModules
	gcc -g -Wall main.o swap.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
