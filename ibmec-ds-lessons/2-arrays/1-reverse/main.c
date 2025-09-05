#include <stdio.h>

int main ()
{
    int position [5];
    int i;
    
    for (i=0; i<5; i++)
    {
        printf("\nEnter the %d value: ", i);
        scanf("%d", &position[i]);
    }
    
    for (i=4; i>-1; i--)
    {
        printf("\nPosition[%d]: ",i);
        printf("%d", position[i]);
    }

    return 0;
}
