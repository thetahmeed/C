#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("First number is the maximum.");
        }
        else
        {
            printf("Third number is the maximum.");
        }

        if(num2 < num3)
        {
            printf("\nSecond number is the minimum.");
        }
        else
        {
            printf("\nThird number is the minimum.");
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("Second number is the maximum.");
        }
        else
        {
            printf("Third number is the maximum.");
        }

        if(num1 < num3)
        {
            printf("\nFirst number is the minimum.");
        }
        else
        {
            printf("\nThird number is the minimum.");
        }
    }

    return 0;
}
