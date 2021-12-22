#include "asm.h"
#include <stdio.h>

int main(){
    int num1 = 1;
    int num2 = 2;
    int * smaller;
    int result = sum_smaller(num1, num2, smaller) ;

    printf("%d\n", result);
    printf("%d\n", *(smaller));
    return 0;
}