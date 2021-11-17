#include <stdio.h>
#include "asm.h"

short s1 = 2, s2 = 3;

int main(void) {

	short sum = crossSumBytes();
	printf("%d", sum);

	return 0;
}