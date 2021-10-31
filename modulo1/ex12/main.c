#include <stdio.h>
#include "methodHeader.h"

int main() {
	char str[] = "Instituto superior de engenharia do porto";
	capitalize(str);
	int i;
	
	for (i = 0; str[i]!='\0'; i++)
	{
		printf("%c", *(str + i) );
	}
	
	return 0;
}
