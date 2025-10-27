#include <stdio.h>

int main ()
{
    int i;
    int vet1[4], vet2[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &vet1[i]);
        vet2[4 - i] = vet1[i];
    }
      for (i = 0; i < 5; i++)
    {
        printf("%d", vet1[i]);
    }

    printf("\n");

        for (i = 0; i < 5; i++)
    {
        printf("%d", vet2[i]);
    }
return 0;
}