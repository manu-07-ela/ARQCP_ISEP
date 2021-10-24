#include <stdio.h>
void fill_array(int *vec, int n)
{
    printf(" ** Inserting array's values **\n ");
    int i;
    for(i=0;i<n;i++){
        printf("Insert %i number: ",i);
        scanf("%d", &vec[i]);
    }
    for(i=0;i<n;i++){
        printf("\nNumber %d = %.0d", i+1, vec[i]);
    }
}
