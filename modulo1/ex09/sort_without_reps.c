#include "methodHeader.h"
int sort_without_reps(int *src, int n, int *dest){
	int aux, cont=0; 
	int * p = copy_array(src, n);
	for(int i=0; i<n; i++){
		for(int k=i+1; k<n; k++){
			if(*(p+i) > *(p+k)){
				aux = *(p+i);
				*(p+i) = *(p+k);
				*(p+k) = aux;
			}
		}
		if (i == 0){
			*dest = *p;
			cont++;
			}
		else if(*(p+i-1) != *(p+i)){
			*(dest+cont) = *(p+i);
			cont++;
			
			}
	}
	return cont;
	
}
