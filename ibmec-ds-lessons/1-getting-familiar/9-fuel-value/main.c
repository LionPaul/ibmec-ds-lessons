#include <stdio.h>

int main ()
{
    float distance, kml, price, target;

    printf("Enter distance: ");
    scanf("%f", &distance);

    printf("Enter consume: ");
    scanf("%f", &kml);

    printf("Enter Price: ");
    scanf("%f", &price);

    target = distance/kml;
    target = target * price;

    printf("%.2f", target);

    return 0;
}
