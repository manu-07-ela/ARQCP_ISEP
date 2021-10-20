//Using the previous function, implement a program that calculates the average of two numbers
//entered using the keyboard in the form of string and display the result on the screen.

#include <stdio.h>
#include "string_to_int.h"

int main(){
	
	char num1str[10], num2str[10];
	int num1 = 0;
	int num2 = 0;
	
	printf("Insira o primeiro valor: \n");
	scanf("%s", n1str);
	num1 = string_to_int(n1str);
	
	printf("Insira o segundo valor: \n");
	scanf("%s", n2str);
	num2 = string_to_int(n2str);
	
	double media = (num1 + num2)/2.0;
	printf("A média é: %f\n", media);
	
	return 0;
}
