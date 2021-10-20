int string_to_int(char a[]){
	int exp = 0;
	int result = 0;
	
	while(a[exp] != '\0'){
		result = result * 10 + a[exp] - '0';
		exp++;
	}
	
	return result;
}
