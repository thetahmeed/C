
#include<stdio.h>

int main()
{
    int centimeter;
    float meter, km;

    printf("Enter centimeter: ");
    scanf("%d", &centimeter);

    meter = centimeter / 100;
    km = centimeter / 100000;

    printf("%d centimeter = %.2f meter\n", centimeter, meter);
    printf("%d centimeter = %.2f km\n", centimeter, km);

    return 0;
}

