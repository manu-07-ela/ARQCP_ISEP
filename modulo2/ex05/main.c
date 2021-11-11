#include <stdio.h>
#include "asm.h"

short str;

int main(void) {

	printf("Type some value:");
	scanf("%d",&str);
	short sum = swapBytes();
	printf("%d", sum);
	return 0;
}