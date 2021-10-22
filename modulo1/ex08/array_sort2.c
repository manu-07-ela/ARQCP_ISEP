void array_sort2(int *vec, int n){
	int vecAux;
	for(int i=0; i<n; i++){
		for(int k=i+1; k<n; k++){
			if(*(vec+i) > *(vec+k)){
			vecAux = *(vec+i);
			*(vec+i) = *(vec+k);
			 *(vec+k) = vecAux;
			}
			}
		
		}
}
