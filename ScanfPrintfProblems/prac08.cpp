#include <stdio.h>
#include <math.h>

int main()
{
    float number, root;

    printf("Enter a number: ");
    scanf("%f", &number);

    root = sqrt(number);

    printf("The root is %f", root);
  
    return 0;
}