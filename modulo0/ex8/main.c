#include <stdio.h>

int integer_part(char a[]){
    int exp = 0;
    int result = 0;

    while(a[exp] != '.'){
        result = result * 10 + a[exp] - '0';
        exp++;
    }
    return result;
}

int fractional_part(char a[])
{
    int exp = 0;
    int result = 0;
    int position = 0;

    do{
        position++;
    }while(a[exp] != '.');

    printf("%d",position);

    while(a[position] != '\0'){
        result = result * 10 + a[position] - '0';
        position++;
    }
    return result;
}

int main()
{
    char x [] = "123.456";
    int x_int = integer_part(x);
    printf("Parte Inteira: %d",x_int);
    //int x_frac = fractional_part(x);
    //printf("Parte Fracionária: %d", x_frac);

}

