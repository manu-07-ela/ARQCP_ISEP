#include <stdio.h>
#include "asm.h"

char str[] = "adda";
char *ptr1=str;

int main(void) {

	int dec = decrypt();
	printf("String: %s\n", str);
	printf("Occurrences: %d\n", dec);

	return 0;
}