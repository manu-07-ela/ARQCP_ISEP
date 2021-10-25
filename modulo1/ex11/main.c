#include <stdio.h>
#include "methodHeader.h"

int main(){
	char str[] = "a man a plan a canal panama.";
	
	int size = cont(str);
	
	printf("size: %d\n", size);
	
	char* ptr = organizeString(str, size);
	
	printf("%s\n", ptr);
	
	printf("%d", palindrome(str));
	
	return 0;
}
