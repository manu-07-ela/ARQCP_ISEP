# include <stdio.h> // needed for printf
# include <limits.h> // needed for CHAR_BIT , INT_MAX , INT_MIN
# include <float.h> // needed of FLT_MAX , FLT_MIN , FLT_DIG

int main(){
	
	printf("\nDATA TYPES SIZES\n");
	
	//char
	printf("\nStorage size for char: %lu\n", sizeof(char));
	
	//int
	printf("\nStorage size for int: %lu\n", sizeof(int));
		
	//unsigned int
	printf("\nStorage size for Unsigned int:   %lu\n", sizeof(unsigned int));
		
	//long 
	printf("\nStorage size for long: %lu\n" , sizeof( long ));
	
	//short
	printf("\nStorage size for short: %lu\n" , sizeof(short));
	
	//long long 
	printf("\nStorage size for long long: %lu\n", sizeof(long long));
	
	//float
	printf("\nStorage size for float: %lu \n", sizeof(float));
		
	//double
	printf("\nStorage size for double: %lu\n", sizeof(double));
	
	return 0;
	
}
