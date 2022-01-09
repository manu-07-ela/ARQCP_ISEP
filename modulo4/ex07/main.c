#include "asm.h"
#include <stdio.h>

int main(){

    short array[]={1,2,3,4,5,5,6};
	short *vec= array;
	int num = 7;
	int res = count_even(vec, num);

    printf("%d\n", res);
    
    return 0;
}

