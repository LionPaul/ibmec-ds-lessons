#include <stdio.h>

int main ()
{
    int num1, num2;
    printf("Enter the value");
    scanf("%d", num1);

    printf("Enter the value");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num1 *= 3;

    printf("%d", num1);
    return 0;
    
}