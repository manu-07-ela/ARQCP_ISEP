int where_is (char *str, char c, int *p){
	int cont=0;
	for(int i=0; *(str+i)!='\0'; i++){
			if(*(str+i) == c){
				*(p+cont)=i;
				cont++;
			}
		}
		return cont;
}
