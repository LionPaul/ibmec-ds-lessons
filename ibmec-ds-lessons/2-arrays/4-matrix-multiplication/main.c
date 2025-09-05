#include <stdio.h>

int main ()
{
    int n, i, j, k;
    
    printf("Enter the matrix order: ");
    scanf("%d", &n);

    int m1[n][n], m2[n][n], m3[n][n];

    printf("Enter the matrix 'm1' values:\n");
    
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the matrix 'm2' values:\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<n;  j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            m3[i][j] = 0;
        }
    }

    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Result\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}