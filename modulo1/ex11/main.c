#include <stdio.h>
#include "methodHeader.h"

int main(){
	char str[] = "a man a plan a canal panama.";

	
	printf("is palindrome: %d \n", palindrome(str));
	printf("1 - means it's a palindrome\n");
	printf("0 - means isn't a palindrome\n");
	return 0;
}
