#include "asm.h"
#include <stdio.h>

long array[5] = {1, 2, 3, 4, 5};

int num = 5;

long *ptrvec = array;

int main(){

    vec_add_one();

    for (int i = 0; i < num; i++)
    {
        printf("%ld\n", array[i]);
    }
    

    return 0;
}