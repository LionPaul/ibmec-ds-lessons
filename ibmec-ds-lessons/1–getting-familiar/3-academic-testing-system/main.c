#include <stdio.h>

int main ()
{
    float test1, test2, test3, target;

    scanf("%f", &test1);
    scanf("%f", &test2);
    scanf("%f", &test3);

    test1 = test1 * 2;
    test2 = test2 * 3;
    test3 = test3 * 5;

    target = (test1 + test2 + test3)/3;

    printf ("%f", target);

    return 0;
}