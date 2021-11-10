compileModules: main.c  array_sort1.c
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall array_sort1.c -o array_sort1.o

compileAll: compileModules
	gcc -g -Wall main.o array_sort1.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
