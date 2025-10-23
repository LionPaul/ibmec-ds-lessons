#include <stdio.h>

int main ()
{
    int i, n, k, j;

    printf("enter the matrix order: ");
    scanf("%d", &n);

    int v1[n][n];

    printf("enter the value: ");
    scanf("%d", &k);
    printf("enter all matrix values:");

    for (i = 0; i < n; i++)
    {
         for (j = 0; j < n; j++)
    {
        scanf("%d", &v1[i][j]);
        if (i == j)
        {
            v1[i][j] *= k;
        }
    }
        
    }
    for (i = 0; i < n; i++)
    {
         for (j = 0; j < n; j++)
    {
        printf("%d", v1[i][j]);
    }
    printf("\n");
        
    }
return 0;
}