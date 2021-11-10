#include <stdio.h>
#include "asm.h"

int op1=0, op2=0;

int main() {

	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	int a;
	a = sum();
	printf("sum = %d\n", a);
	return 0;
}
