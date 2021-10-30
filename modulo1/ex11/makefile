compileModules: main.c cont.c lowerToUpperCase.c palindrome.c
	gcc -c -g -Wall main.c  -o main.o
	gcc -c -g -Wall lowerToUpperCase.c -o lowerToUpperCase.o
	gcc -c -g -Wall cont.c -o cont.o
	gcc -c -g -Wall palindrome.c -o palindrome.o

compileAll: compileModules
	gcc -g -Wall main.o lowerToUpperCase.o cont.o palindrome.o -o mainCompiled.o

run: compileAll
	./mainCompiled.o
