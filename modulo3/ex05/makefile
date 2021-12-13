compileAll: main.o asm.o avrg.o
	gcc -c -g -Wall main.c -o main.o
	gcc -c -g -Wall asm.s -o asm.o
	gcc -c -g -Wall avrg.s -o avrg.o

compileTogether: compileAll
	gcc -g -Wall main.o asm.o avrg.o -o mainCompile

run: compileTogether
	./mainCompile