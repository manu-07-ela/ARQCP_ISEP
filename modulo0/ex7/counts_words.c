int count_words(char str[]){
	int i = 0, count = 0;	

	while(str[i] != '\0'){
		if(str[i] == ' '){
			count++;
		}
		i++;
		continue;
	}
	
	return count;
}
