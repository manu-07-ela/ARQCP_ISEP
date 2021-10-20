// Implement a function void copy_vec(int *vec1, int *vec2, int n) that, through the use of
// pointers, copies n integers from vec1 into vec2.

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

void print_vec(int *vec) {
    int i;
    for (i=0;i<3;i++){
        printf("%d ", vec[i]);
    }
}

int main ()
{
    int vec1[3] = {8,9,10};
    int vec2[3] = {2,5,4};
    int n = 2;
    printf("\nVector 1 : ");
    print_vec(vec1);
    printf("\nVector 2 : ");
    print_vec(vec2);
    printf("\nVector 2 with %d elements of Vector 1 : ", n);
    copy_vec(vec1, vec2, n);
}

