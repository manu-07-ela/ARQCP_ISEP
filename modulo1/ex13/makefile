compileModules: main.c where_is.c 
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall where_is.c -o where_is.o

compileAll: compileModules
	gcc -g -Wall main.o where_is.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
