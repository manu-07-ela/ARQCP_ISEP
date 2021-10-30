# A Makefile with variables and suffix rules

# variaveis
INCLUDES = methods.h
SOURCES = cont_string.c find_word.c find_all_words.c main.c
OBJFILES = cont_string.o find_word.o find_all_words.o main.o
EXEC = ex20

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
