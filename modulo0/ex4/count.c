#include <stdio.h>

void count(int *vec, int n, int value)
{
	int i, times=0;
	for(i=0;i<n;i++)
	{
		if (vec[i]==value)
		{
			times=times+1;
		}
	}
	printf("The element %d appeared %d times.\n", value, times);
}
