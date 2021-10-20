#include <stdio.h>
void fill_array(int *vec, int n)
{
    int i, x;
    for(i=0;i<n;i++){
        vec[i] = scanf("%d ", &x);
    }
}
