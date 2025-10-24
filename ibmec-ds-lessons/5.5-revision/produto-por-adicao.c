#include <stdio.h>


int multiplicacao(int num1, int num2)
{
    int i = num2;
    if (i == 0)
    {
        return 0;
    }

    return num1 + multiplicacao(num1, num2-1);
}


int main()
{
    int num1, num2, target;
    printf("Entre os numeros a serem multiplicados: ");
    scanf("%d %d", &num1, &num2);
    target = multiplicacao(num1, num2);
    printf("%d", target);

    return 0;
}