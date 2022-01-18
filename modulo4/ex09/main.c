#include "asm.h"
#include <stdio.h>

int main(){

	int result = calculate(5, 7);
	printf("%d\n", result);
    return 0;
}

void print_result(char op, int o1, int o2, int res)
{
    printf("%d %c %d = %d\n", o1, op, o2, res);
}

