# A Makefile with variables and suffix rules

# variaveis
INCLUDES = methodHeader.h
SOURCES = copy_vec.c print_vec.c main.c
OBJFILES = copy_vec.o print_vec.o main.o
EXEC = ex02

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name.c.o:
	gcc -Wall -g -c $<
	
${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
