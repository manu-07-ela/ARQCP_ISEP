#include <stdio.h>
#include "asm.h"

short str;
char byte1= 'a';
char byte2= 'b';

int main(void) {

	printf("Type byte 1 and byte 2:");
	short res = concatBytes();
	printf("%hd\n",res);
	
	return 0;
}