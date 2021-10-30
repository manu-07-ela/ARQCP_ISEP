compileModules: main.c inc_nsets.c populate.c check.c 
	gcc -c -g -Wall inc_nsets.c -o inc_nsets.o
	gcc -c -g -Wall populate.c -o populate.o
	gcc -c -g -Wall check.c -o check.o
	gcc -c -g -Wall main.c -o main.o
	
compileAll: compileModules
	gcc -g -Wall inc_nsets.o populate.o check.o main.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
