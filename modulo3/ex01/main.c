#include <stdio.h>
#include "asm.h"


char str[] = "00110011";
char *ptr = str;

int main(void) {
	printf("String: %s\n", str);
	printf("Número de zeros: %d\n", zero_count());

	return 0;
}