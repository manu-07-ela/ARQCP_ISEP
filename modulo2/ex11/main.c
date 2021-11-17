#include <stdio.h>
#include "asm.h"

int op1 = 2;
int op2 = 5;

int main(void) {

	char res = test_flags();
	printf("%s\n",res);
	
	return 0;
}