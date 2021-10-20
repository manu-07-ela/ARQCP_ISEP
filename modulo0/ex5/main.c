//Implement a function int string_to_int(char *str) that transforms a string into an equivalent
//integer value. For example, the string "12345" must be transformed into the integer 12345. In
//this exercise do not use the atoi() function.

#include <stdio.h>
#include "string_to_int.h"

int main(int argc, char **argv)
{
    char num[50] = "12345";
    printf("%d", string_to_int(num));
    return 0;
}
