#include "methodHeader.h"
#include <stdio.h>

int main(){

	int array[100];
	int num = 100;
	int limit = 20;
	
	populate(array, limit, num);
	
	for(int i=0; i<num-2; i++){
		
		if(check(*(array+i), *(array+i+1), *(array+i+2)) == 1 ){
			inc_nsets();
		
		}
		
	}
	
	printf("%d\n", cont);

}
