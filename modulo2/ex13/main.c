#include <stdio.h>
#include "asm.h"

int base = 4;
int height = 5;

int main(void) {

	int res = getArea();
	printf("%d\n",res);
	
	return 0;
}