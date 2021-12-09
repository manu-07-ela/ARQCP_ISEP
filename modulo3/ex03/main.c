#include <stdio.h>
#include "asm.h"


char *ptr1;
char *ptr2;

int main(void) {
	char str1[] = "Viva a vida";
	char str2[100];

	ptr1 = str1;
	ptr2 = str2;

	printf("String 1: %s\n", str1);
	str_copy_porto2();
	printf("String 2: %s\n", str2);

	return 0;
}