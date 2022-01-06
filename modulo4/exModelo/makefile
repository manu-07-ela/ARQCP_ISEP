compileAll: main.o asm.o
	gcc -c -g -Wall main.c -o main.o
	gcc -c -g -Wall pontuacoes.s -o pontuacoes.o

compileTogether: compileAll
	gcc -g -Wall main.o pontuacoes.o -o mainCompile

run: compileTogether
	./mainCompile