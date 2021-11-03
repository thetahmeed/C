#include <stdio.h>

int main()
{
    float centimete, meter, km;

    printf("Enter the length in centimete: ");
    scanf("%f", &centimete);

    meter = centimete / 100;
    km = centimete / 100000;

    printf("\nIs equal %f m", meter);
    printf("\nIs equal %f km", km);

    return 0;
}