#include <stdio.h>
#include <stdbool.h>
#include "methods.h"

int main(){
	char numStr[100];
	printf("Introduza o seu número: ");
	scanf("%s", numStr);
	
	if(check(numStr, 1))
		printf("O valor introduzido \"%s\" é binário.\n", numStr);
	else if(check(numStr, 7))
		printf("O valor introduzido \"%s\" é octal.\n", numStr);
	else if(check(numStr, 9))
		printf("O valor introduzido \"%s\" é decimal.\n", numStr);
	else if(hexadecimalCheck(numStr))
		printf("O valor introduzido \"%s\" é hexadecimal.\n", numStr);
	else
		printf("O valor introduzido não é válido.\n");
	
	return 0;
}
