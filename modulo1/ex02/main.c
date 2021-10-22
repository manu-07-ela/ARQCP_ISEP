// Implement a function void copy_vec(int *vec1, int *vec2, int n) that, through the use of
// pointers, copies n integers from vec1 into vec2.

#include <stdio.h>
#include "methodHeader.h"
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
    return 0;
}

