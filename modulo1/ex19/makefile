compileModules: main.c find_word.c cont_string.c
	gcc -c -g -Wall cont_string.c -o cont_string.o
	gcc -c -g -Wall main.c -o main.o
	gcc -c -g -Wall find_word.c -o find_word.o

compileAll: compileModules
	gcc -g -Wall cont_string.o main.o find_word.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
