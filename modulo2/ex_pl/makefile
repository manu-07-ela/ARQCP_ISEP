main: main.o asm.o
	gcc main.o asm.o −o main
	
main.o: main.c asm.h
	gcc −W all −g −c main.c −o main.o
	
asm.o: asm . s
	gcc −W all −g −c increment.s −o increment.o
	
run: main
	./main
	
clean:
	rm ∗.o main
