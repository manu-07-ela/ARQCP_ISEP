#include <stdbool.h>

bool check(char strNum[], int lim){
	int i;
	for(i = 0; strNum[i] != '\0'; i++){
		if(strNum[i] - '0' > lim){
			return false;
		}
	}
	return true;
}
