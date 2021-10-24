#include <stdbool.h>

bool hexadecimalCheck(char strNum[]){
	int i;
	bool aux = false;
	for(i = 0; strNum[i] != '\0'; i++){
		if(strNum[i] >= 'A' && strNum[i] <= 'F'){
			aux = true;
		}
	}
	return aux;
}
