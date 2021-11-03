#include <stdio.h>

int main()
{

    // 3. Diameter, circumference, and area with the radius of a circle
    int radius;
    float pi, diameter, circumference, area;

    printf("Enter the radius of a triangle: ");
    scanf("%d", &radius);

    pi = 3.1416;
    diameter = radius + radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("\nThe diameter is : %f", diameter);
    printf("\nThe circumference is : %f", circumference);
    printf("\nThe area is : %f", area);

    return 0;
}
