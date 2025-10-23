#include <stdio.h>


int fatorial (int nNum) {
    if (nNum == 0)
    {
        return 1;
    }

    return nNum * fatorial (nNum-1);

}

int main ()
{
    int nNum, target;
    printf("Dê entrada em um número natural: ");
    scanf("%d", &nNum);
    target = fatorial(nNum);
    printf ("%d", target);

    return 0;
}