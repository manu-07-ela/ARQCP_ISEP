#include "methodHeader.h"
int sort_without_reps(int *src, int n, int *sortedOne){
    int temp, i , j, k;

    for( i = 0;i < n; i++){
        *(sortedOne + i) = *(src + i);
    }
    for( i = 0; i < n; i++){
        for( j = i + 1; j < n; j++){
            if(*(sortedOne + i) > *(sortedOne + j)){
                temp = *(sortedOne + i);
                *(sortedOne + i) = *(sortedOne + j);
                *(sortedOne + j) = temp;
            }
        }
    }
    for( i = 0; i < n; i++){
        for( j = i + 1; j < n; j++){
            if(*(sortedOne + i) == *(sortedOne + j)){
                for( k = j; k < n; k++){
                    *(sortedOne + k) = *(sortedOne + k + 1);
                }
                n--;
                j--;
            }
        }
    }
    return n;
}
