#include <stdio.h>
#include "methodHeader.h"

int main(){
	int array[6] = {1,2,3,4,5,6};
	int size = 6;
	int *p;
	p=array;
	
	printf("Sómatorio: %d\n", sum_even(p,size));
	return 0;
}
