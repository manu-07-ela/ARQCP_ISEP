#include "asm.h"
#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    int result = greatest(a, b, c);

    printf("%d\n", result);
    return 0;
}
