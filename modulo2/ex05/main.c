#include <stdio.h>
#include "asm.h"

short s;

int main(void) {

	printf("Type some value:");
	scanf("%hd",&s);
	short sum = swapBytes();
	printf("%hd \n", sum);
	return 0;
}