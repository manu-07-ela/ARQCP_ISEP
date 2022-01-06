#include "asm.h"
#include <stdio.h>

int main(){
    int var1 = 3;
    int *v1 = &var1;
    int v2 = 1;

    printf("%d", inc_and_square(v1, v2));
    printf("%d", *v1);
    
    return 0;
}

