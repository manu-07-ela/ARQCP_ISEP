#include <stdio.h>
#include "asm.h"

int op1 = 2;
int op2 = 4;

int main(void){

    long a = sum2ints();
    printf("%ld\n",a);

    return 0;
}