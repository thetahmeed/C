#include <stdio.h>

int main()
{
    int base, height;
    float area;

    printf("Enter base and height of the triangle: ");
    scanf("%d %d", &base, &height);

    area = (base * height) / 2;

     printf("Area of the triangle is %f", area);

  
    return 0;
}