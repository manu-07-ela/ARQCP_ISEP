#include <stdio.h>
#include "methods.h"

int main() {
	float grades[] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
	int freq [20];
	float *ptr = grades;
    int *p = freq;
    frequencies(ptr, sizeof(grades) / sizeof(float), p);

    for (int i = 0; i < 20; i++)
    {
        printf("%d ",*(p + i));
    }
}
