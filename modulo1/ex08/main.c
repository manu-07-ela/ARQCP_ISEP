#include <stdio.h>
#include "methodHeader.h"
int main(){
	int array[6] = {4,3,1,6,7,8};
	int size = 6;
	
	for(int i=0; i<size; i++){
		printf("%d", array[i]);
		}
		printf("\n");
		
	array_sort2(array, size);
	
		for(int i=0; i<size; i++){
		printf("%d", array[i]);
		}
		printf("\n");

	

	return 0;
}
