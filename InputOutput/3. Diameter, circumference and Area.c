
#include<stdio.h>

int main()
{
    int radius;
    float diameter, circumference, area;

    printf("Enter radius: ");
    scanf("%d", &radius);

    diameter = radius * 2;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;

    printf("Diameter is %.2f\n", diameter);
    printf("Circumference is %.2f\n", circumference);
    printf("Area is %.2f", area);

    return 0;
}

