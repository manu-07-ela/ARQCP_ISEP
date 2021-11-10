#include "methodHeader.h"
#include <stddef.h>

char* find_word(char* initial_addr, char* word ){
	int j = 0;
	int aux = cont_string(word);
	char* ptr = NULL;
	
	if(*initial_addr != '\0' && *word != '\0'){
		while(*initial_addr != '\0' && j<aux ){
			if(*initial_addr == *(word + j)){
				j++;
			}else
				j=0;
			
			if(j==1){
				ptr=initial_addr;
			}
					
			initial_addr++;
		}

		if(j == aux)
			return ptr;
		else
			ptr=NULL;
	}

	return ptr;
}
