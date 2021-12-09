#include "asm.h"
#include <stdio.h>

char str[] = "vai";

char str2[10];

char *ptr1 = str;

char *ptr2 = str2;

int main(){

    str_copy_porto();

    printf("%s\n", ptr2);

    return 0;
}