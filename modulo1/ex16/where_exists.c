#include "methods.h"
#include <stddef.h>
char* where_exists(char* str1, char*str2){
	
    if (str1 == NULL || str2 == NULL || size(str1) == 0 || size(str2) == 0 || size(str1) > size(str2)) {
        return NULL;
    }

    int aux = 0, temp;

    for (int i = 0; i < size(str2); i++) {
        if(aux==0){
            temp = i;
        }
        if (*(str2 + i) == *(str1 + aux)) {
            aux++;
        } else {
            aux = 0;
        }
        if (aux == size(str1)) {
            return (str2 + temp);
        }
    }
    return NULL;;
}
