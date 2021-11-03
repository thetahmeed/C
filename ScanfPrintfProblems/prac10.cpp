#include <stdio.h>
#include <math.h>

int main()
{
    float anyside, area;

    printf("Enter any side of an equilateral triangle: ");
    scanf("%f", &anyside);

    area = (sqrt(3) / 4) * (anyside * anyside);

    printf("The are is %f", area);
  
    return 0;
}