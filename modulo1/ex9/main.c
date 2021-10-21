#include <stdio.h>
#include "methodHeader.h"

int main(){
	int array1[4] = {1,5,2,2};
	int array2[4];
	int size=4;
	
	printf("First array\n");
	for (int i=0; i<size; i++){
		printf("[%d]", array1[i]);
		}
		
	printf("\n");
	printf("Total of elements copied: %d", sort_without_reps(array1, size, array2));
	printf("\n");
	
	printf("Second array\n");	
	for (int i=0; i<size; i++){
		printf("[%d]", array2[i]);
		
	}
	
	
	
	return 0;
}
