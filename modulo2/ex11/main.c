#include <stdio.h>
#include "asm.h"

int op1 = 2147483647;
int op2 = 1;

int main(void) {

	char res = test_flags();
	printf("%d\n",res);
	
	return 0;
}