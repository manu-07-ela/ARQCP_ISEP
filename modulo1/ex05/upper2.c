void upper2(char *str1){
	int i=0;
	while(*(str1+i) != '\0'){
		if(*(str1+i)>=97 && *(str1+i)<=122){
			*(str1+i)-=32;
			}
			i++;
		}
} 
