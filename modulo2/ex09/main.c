#include <stdio.h>
#include "asm.h"

char A = 1;
short B = 5;
int C = 10;
int D = 4;

int main(void) {

	long res = sum_and_subtract();
	printf("%d\n",res);
	
	return 0;
}