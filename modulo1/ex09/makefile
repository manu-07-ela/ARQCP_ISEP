compileModules: main.c sort_without_reps.c
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall sort_without_reps.c -o sort_without_reps.o

compileAll: compileModules
	gcc -g -Wall main.o sort_without_reps.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
