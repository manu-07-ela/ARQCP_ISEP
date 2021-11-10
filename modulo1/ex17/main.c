#include <stdio.h>
#include "methodHeader.h"

int main(){

    int array1[] = {1,3,4};
    int array2[] = {7,6,5};
    int size = 3 ;

    printf("First array: ");

    for(int i=0; i<size; i++){
        printf("[%d] ", *(array1+i));
    }

    printf("\n");

    printf("Second array: ");

    for(int i=0; i<size; i++){
        printf("[%d] ", *(array2+i));
    }

    printf("\n");

    swap(array1, array2, size);

    printf("First array swaped: ");

    for(int i=0; i<size; i++){
        printf("[%d] ", *(array1+i));
    }

    printf("\n");

    printf("Second array swaped: ");

    for(int i=0; i<size; i++){
        printf("[%d] ", *(array2+i));
    }

    printf("\n");

}