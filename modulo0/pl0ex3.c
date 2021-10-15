#include<stdio.h>

int fill_array(int *vec, int n)
{
    int i, x;
    for(i=0;i<n;i++){
        vec[i] = scanf("%d ", &x);
    }
    return (vec);
}

double average(int *vec, int n){
    int i, soma=0;
    for(i=0;i<sizeof(vec);i++){
        soma+=vec[i];
    }
    return soma/n;
}

int main(void){
    int notas[10];
    int n = 10;
    fill_array(notas,n);
    printf("%f",average(notas, n));
}
