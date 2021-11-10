#include <stdio.h>
#include "methodHeader.h"

int main(){

    int n, i;
    printf("Insert the size of the array: ");
    scanf("%d", &n);

    int src[n];
    int sortedOne[n];

    printf("Insert the array:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &src[i]);
    }

    int numberOfItems;
    numberOfItems = sort_without_reps(src, n, sortedOne);
    printf("Number os items: %d\n", numberOfItems);

    printf("Sorted array:\n");
    for(i = 0; i < numberOfItems; i++){
        printf("%d\n", sortedOne[i]);
    }
    return 0;
}
