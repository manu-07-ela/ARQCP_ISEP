#include <stdio.h>
#include "methods.h"

int main(){
    short arrayOfShorts[] = {1,2,3,4};
    int n = 4;
    int arrayOfIntegers[2];

    compress_shorts(arrayOfShorts, n, arrayOfIntegers);
    for(int i = 0; i < n; i++){
        printf("%d ", arrayOfIntegers[i]);
    }
    return 0;
}
