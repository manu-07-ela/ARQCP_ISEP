int cont(char *string){
	
	int size=0;
	
	while(*(string+size)!='\0'){
		size++;
	}
	
	return size; 

}
