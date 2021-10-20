#include<stdio.h>
#include "average.h"
#include "fill_array.h"

int main(void){
    int notas[10];
    int n = 10;
    fill_array(notas,n);
    printf("%f",average(notas, n));
}

