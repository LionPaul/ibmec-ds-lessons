#include <stdio.h>

int main ()
{
    float celsius, fahrenheits;

    printf ("Enter your value:" );
    scanf ("%f", &celsius);

    fahrenheits = celsius/5;
    fahrenheits = fahrenheits*9;
    fahrenheits = fahrenheits + 32;

    printf("%.2f", fahrenheits);

}