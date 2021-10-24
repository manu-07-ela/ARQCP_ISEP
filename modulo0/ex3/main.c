#include <stdio.h>
#include "methods.h"

int main(){
    int notas[30];
    int n = 30;
    fill_array(notas,n);
    printf("\n%.2f", average(notas, n));

    return 0;
}

