#include <stdio.h>

int main ()
{
    float v1[4], v2[4];
    int i;

    for (i=0; i<4; i++ )
    {
        v1[i] = i;
    }

    for (i=0; i<4; i++)
    {
        v2[i] = v1[i];
      printf("\n%.2f", v2[i]);
    }

    return 0;
}
