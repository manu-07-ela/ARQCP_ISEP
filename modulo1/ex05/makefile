compileModules: main.c upper2.c
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall upper2.c -o upper2.o

compileAll: compileModules
	gcc -g -Wall main.o upper2.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
