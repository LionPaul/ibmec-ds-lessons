#include <stdio.h> 

int main () 
{
    int num1, num2, num3, target;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    target = (num1 + num2 + num3)/3;

    printf("%d", target);

    return 0;


}