
#include<stdio.h>
#include<math.h>

int main()
{
    int anyNumber;
    float squareRoot;

    printf("Enter any number: ");
    scanf("%d", &anyNumber);

    squareRoot = sqrt(anyNumber);

    printf("The square root is %.2f\n", squareRoot);

    return 0;
}

