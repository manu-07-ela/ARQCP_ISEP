compileModules: find_word.c main.c cont_string.c
	gcc -c -g -Wall find_word.c -o find_word.o
	gcc -c -g -Wall main.c -o main.o
	gcc -c -g -Wall cont_string.c -o cont_string.o
compileAll: compileModules
	gcc -g -Wall main.c find_word.c cont_string.o -o mainCompile.o
run: compileAll
	./mainCompile.o