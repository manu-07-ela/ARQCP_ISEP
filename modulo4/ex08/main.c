#include "asm.h"
#include <stdio.h>

int main(){

   	int a=1;
	int num=2;
	int *b=&num;
	int c=10;
	
	printf("res: %d\n", calc(a, b, c));
    
    return 0;
}

