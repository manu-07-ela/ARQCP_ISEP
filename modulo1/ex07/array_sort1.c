void array_sort1(int *vec, int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int k=i+1; k<n; k++){
			if (vec[i] > vec[k]){
				aux = vec[i];
				vec[i] = vec[k];
				vec[k] = aux;
				
				}
		}
	}
}
