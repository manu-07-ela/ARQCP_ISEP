#include "methodHeader.h"

void capitalize (char *str){

	if(verify(*str)==1) *str-=32;
	
	for(int i=2; *(str+i)!='\0'; i++){
		if(*(str+i-1) == 32 && verify(*(str+i))==1){
			*(str+i)-=32;
		}
	}
}
