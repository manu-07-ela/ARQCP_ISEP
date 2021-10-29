#include <stdio.h>
#include "methods.h"

int main(){
    char str1[15];
    char str2[30];

    printf("Insert the first string:\n");
    scanf("%[^\n]%*c",str1);

    printf("Insert the second string:\n");
    scanf("%[^\n]%*c",str2);

    char *ptr1 = str1;
    char *ptr2 = str2;

    printf("%s\n", where_exists(ptr1, ptr2));
}
