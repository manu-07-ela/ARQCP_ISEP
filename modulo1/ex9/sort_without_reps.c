
int sort_without_reps(int *src, int n, int *dest){
	int aux, cont=0; 
	
	for(int i=0; i<n; i++){
		for(int k=i+1; k<n; k++){
			if(*(src+i) > *(src+k)){
				aux = *(src+i);
				*(src+i) = *(src+k);
				*(src+k) = aux;
			}
		}
		if (i == 0){
			*dest = *src;
			cont++;
			}
		else if(*(src+i-1) != *(src+i)){
			*(dest+cont) = *(src+i);
			cont++;
			
			}
	}
	return cont;
	
}
