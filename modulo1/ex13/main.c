#include <stdio.h>
#include "methodHeader.h"
int main(){

    char str[] = {"a b c a b"};
    char c = 'a';
    int array[2];

    where_is(str, c, array);

    printf("Index of occurance of %c: ", c);

    for(int i=0; i<2; i++){
        printf("%d ", *(array+i));
    }

    printf("\n");

    return 0;

}

