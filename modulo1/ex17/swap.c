void swap(int* vec1, int* vec2, int size){
	int aux;
	for(int i=0; i<size; i++){
			aux = *(vec1+i);
			*(vec1+i) = *(vec2+i);
			*(vec2+i) = aux; 
			
		}
		
 }
