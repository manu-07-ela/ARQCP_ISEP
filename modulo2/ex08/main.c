#include <stdio.h>
#include "asm.h"

int main(void) {
	printf("Types s1 and s2:");
	scanf("%hd",&s1);
	scanf("%hd",&s2);

	short sum = crossSumBytes();
	printf("%d", sum);

	return 0;
}