#include <stdio.h>
#include "method.h"


int main(){
    int a,b,c;
    do{
        printf("\nInsira os numeros: ");
        scanf("%d %d", &a, &b);
        c = sum(a,b);
        printf("Soma: %d\n", c);

    } while(c<10);
    return 0;
}
