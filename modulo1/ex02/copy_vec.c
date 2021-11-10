#include <stdio.h>
void copy_vec(int *vec1, int *vec2, int n)
{
    int i, j;
    for (i=0;i<n;i++){
        vec2[i] = *(vec1);
        vec1 = vec1 + 1;
        //vec2[i] = vec1[i];
    }
    for (j=0;j<3;j++){
        printf("%d ", vec2[j]);
    }
}
