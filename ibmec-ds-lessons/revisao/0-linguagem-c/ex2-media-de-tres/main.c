//Faça um programa em C para calcular a média aritmética de três números inteiros lidos pelo teclado.

#include <stdio.h>

int main ()
{
    int n1 = 1, n2 = 2, n3 = 3, soma = n1 + n2 + n3;
    soma /= 3; 
    printf("%d", soma);
return 0;
}