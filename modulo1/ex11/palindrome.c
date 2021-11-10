#include "methodHeader.h"
 int palindrome(char *str){
	 
	 int size = cont(str);
	 int i=0;
	 while(!(i>size)){
		if(!((*(str+size-1)>='A' && *(str+size-1)<='Z') || (*(str+size-1)>='a' && *(str+size-1)<='z'))){
				size--;
				continue;
			}
		if(!((*(str+i)>='A' && *(str+i)<='Z') || (*(str+i)>='a' && *(str+i)<='z'))){
				i++;
				continue;
			}
		if(*(str+i)==*(str+size-1)){
				i++;
				size--;
			}else{
				return 0;
				}
	}
	return 1;
	
 }

