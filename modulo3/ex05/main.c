#include <stdio.h>
#include "asm.h"
#include "avrg.h"

int array[] = {1,2,3,4,5,6,7,8,9,10};
int *ptrvec=array;
int num=10;

int main(void) {
	int soma = vec_sum();
	printf("Soma: %d \n", soma);
	int media = vec_avg();
	printf("Media: %d \n", media);
	return 0;
}