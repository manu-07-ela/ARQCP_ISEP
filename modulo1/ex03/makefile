compileModules: main.c sum_even.c
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall sum_even.c -o sum_even.o

compileAll: compileModules
	gcc -g -Wall  main.o sum_even.o -o  mainCompiled.o

run: compileAll
	./mainCompiled.o
