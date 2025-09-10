#include <stdio.h>

int main ()
{
    int n, i, j;

    printf("Enter the matrix order: ");
    scanf("%d", &n);

     int m1[n][n];

    printf("Enter the matrix values: ");

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the multiplier number:");


    return 0;
}