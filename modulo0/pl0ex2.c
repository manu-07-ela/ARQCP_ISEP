#include <stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(){
	int a,b,c;
	do{
		printf("\nEnter the numbers: \n");
		scanf("\n%d %d\n", &a, &b);
		
		printf("\nSum: %d\n", c=sum(a,b));
		
	} while(c<10);
}
