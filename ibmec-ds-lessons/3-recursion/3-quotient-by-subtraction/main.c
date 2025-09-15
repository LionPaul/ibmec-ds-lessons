#include <stdio.h>

int division(dividend, divisor)
{
    if (dividend - divisor < 0)
    {
        return 0;
    }
    return 1 + division(dividend - divisor, divisor);
}


int main ()
{
    int dividend, divisor, quotient;

    printf("\nEnter the dividend: ");
    scanf("%d", &dividend);

    printf("\nEnter the divisor: ");
    scanf("%d", &divisor);

    quotient = division (dividend, divisor);

    printf("\n%d", quotient);

}