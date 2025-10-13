//O sistema de avaliação determinada disciplina é composto por três provas. A primeira prova tem peso 2, a
//segunda tem peso 3 e a terceira tem peso 5. Faça um programa em C para calcular a média final de um
//aluno nesta disciplina.

#include <stdio.h>

int main()
{
    float n1 = 10, n2 = 20, n3 = 30, soma = 0;
    n1 *= 2;
    n2 *= 3;
    n3 *= 5;
    
    soma = n1 + n2 + n3;
    soma /= 10;

    printf("%2.f", soma);
    return 0;
}