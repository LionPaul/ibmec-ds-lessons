#include <stdio.h>

int main ()
{
    int n, i, j;

    printf("Enter the matrix order: ");
    scanf("%d", &n);

    int m1[n][n]; 

    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", m1[j][i]);
        }
        printf("\n");
    }
    return 0;
}