int inc_nsets(int *ptr, int size){
	int count = 0;
	for(int i=0; i<size-2; i++){
		if(check(*(ptr+i), *(ptr+i+1), *(ptr+i+2)) == 1 ){
			count++;
		}
	}
		return count;
}
