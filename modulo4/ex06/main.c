#include "asm.h"
#include <stdio.h>

int main(){

    char aux[] = "";
    char aux2[] = "";

    char *a = &aux[0];
    char *b = &aux2[0];

    printf("%d\n", test_equal(a,b));
    
    return 0;
}

