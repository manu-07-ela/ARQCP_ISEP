#include <stdio.h>
#include "sum.h"

int main(){
	int a,b,c;
	do{
		printf("\nEnter the numbers: \n");
		scanf("%d %d", &a, &b);
		
		printf("\nSum: %d\n", c=sum(a,b));
		
	} while(c<10);
}
