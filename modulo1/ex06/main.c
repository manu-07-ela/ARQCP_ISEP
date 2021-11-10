// Implement a function void power_ref(int* x, int y) that calculates the power xy.
// The result should be placed at the address indicated in the first parameter, changing its initial value.

#include <stdio.h>
#include "method.h"

int main()
{
    int x = 2;
    int y = 3;
    power_ref(&x, y);
    printf("%d", x);
    return 0;
}
