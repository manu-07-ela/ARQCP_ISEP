#include <stdio.h>

int main()

{

	int x = 5;

	int* xPtr = &x;

	float y = *xPtr + 3;

	int vec[] = {10, 11, 12, 13};

	

	// print value of x and y

	printf("%d %.0f\n", x,y);

	

	//The address (in Hexadecimal) of x and xptr

	printf("%p \n", &x);

	printf("%p \n", xPtr);

	

	//The value pointed by xptr

	printf("%d\n", *xPtr);

	

	//The address of vec

	printf("%p\n", vec);

	

	//The values of vec [0], vec [1], vec [2] and vec [3]


	for(int i=0; i<4; i++)

	{

		printf("%d ", vec[i]);

	}

	printf("\n");

	

	//The addresses of vec [0], vec [1], vec [2] and vec [3]


	for(int j=0; j<4; j++)

	{

		printf("%p ", vec+j);

	}

	printf("\n");

	

	// b - A relação entre os endereços de memória do vetor de inteiros varia de 4 em 4 bytes umas vez que um inteiro ocupa 4 bytes num sistema de 64bits.

	

	// c - Quer o sistema em questão seja de 32 ou 64bits, funcionará da mesma forma uma vez que os dois sistemas reservam para uma variável de tipo inteiro um espaço de memória de 4bytes.

	return 0;

}
