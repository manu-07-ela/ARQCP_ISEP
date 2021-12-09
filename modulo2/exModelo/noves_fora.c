#include "header.h"
void noves_fora(unsigned int *numeros, int n){
    char result;
    short increment = 1;
    short aux = 0;
    for(int i=0; i<n; i++){

        aux = *(numeros + i + increment);
        
        result = calcula_resto();

        *(numeros+i) = result;
            
        }
        
    }
}