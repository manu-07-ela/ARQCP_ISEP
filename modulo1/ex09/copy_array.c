int* copy_array(int *src, int n){
	
	int array[n];
	int* ptr = array;
	for(int i=0; i<n; i++){
		array[i] = *(src+i);
	}
	
	return ptr;
}
