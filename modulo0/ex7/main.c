//Implement a function int count_words(char *str) that receives a string and returns the number
//of words in the string. Consider that words are separated by a single space. Test your function
//with several different strings.

#include <stdio.h>
#include "counts_words.h"

int main(){
	char strInput[] = "Licenciatura em Engenharia Informática";
	
	int wordNumber = count_words(strInput);
	printf("A frase \"%s\" tem: %d palavra(s).\n", strInput, wordNumber+1);
	
	return 0;
}
