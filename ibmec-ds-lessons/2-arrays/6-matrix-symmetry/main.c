#include <stdio.h>

int main()
{
    int n, i, j, symmetry = 1;

    printf("Enter the matrix order: ");
    scanf("%d", &n);

    int m1[n][n];

    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (m1[i][j] != m1[j][i])
            {
                symmetry = 0;
            }
        }
    }

    if (symmetry == 1)
    {
        printf("It is symmetrical");
    }
    else
    {
        printf("It is not symmetrical");
    }

    return 0;
}