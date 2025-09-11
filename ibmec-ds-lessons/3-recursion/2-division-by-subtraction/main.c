#include <stdio.h>

int division (int dividend, int divisor)
{
    if(dividend-divisor < 0)
    {
        return dividend;
    }

    return division(dividend - divisor, divisor);
}

int main ()
{
    int dividend, divisor;
    printf("\nEnter the Dividend: ");
    scanf("%d", &dividend);

    printf("\nEnter other value: ");
    scanf("%d", &divisor);

    printf("The remainder of dividing %d by %d is %d", dividend, divisor, division(dividend, divisor));


    return 0;

}