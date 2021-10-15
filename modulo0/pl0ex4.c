#include<stdio.h>

int count(int *vec, int n, int value)
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

int main()
{
	int array[8] = {1,2,1,3,1,4,1,5};
	int n=8;
	int element=1;
	count(array,n,element);
}

