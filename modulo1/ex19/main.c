#include <stdio.h>
#include "methodHeader.h"

int main(){
	
	char word [] ="ele";
	
	char initial_addr [] ="pe ele";
	
	char* address = find_word(initial_addr, word);
	
	printf("%p\n", address); 
	
	
	return 0;
}
