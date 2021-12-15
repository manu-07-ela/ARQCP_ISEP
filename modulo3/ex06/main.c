#include "asm.h"
#include <stdio.h>

char array[] = "bbbb";

long *ptr1 = array;

int main(){

    int result = encrypt();

    printf("%d", result);

    return 0;
}