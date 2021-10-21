#include <stdio.h>
//#include "methods.h"

double average(int *vec, int n){
    int i, soma=0;
    for(i=0;i<n;i++){
        soma += vec[i];
        printf("%d", soma);
    }
    
    double media = soma/n;

    return media;
}

void fill_array(int *vec, int n)
{
    int i;
    int k;
    for(i=0;i<n;i++){
		scanf("%d", &k);
		*(vec+i) = k;
    }
}

int main(){
    int notas[9];
    int n = 9;
    fill_array(notas,n);
    printf("%.1f", average(notas, n));
    
    return 0;
}

