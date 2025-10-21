#include <stdio.h>

int main ()
{
    float distance, kml, price, target;
    printf("Enter the distance:");
    scanf("%f", &distance);

    printf("Enter the KM/L");
    scanf("%f", &kml);

    printf("Enter the KM/L oil price");
    scanf("%f", &price);

    target =  (distance/kml) * price;

    printf("You will pay R$: %.2f", target);
return 0;
}