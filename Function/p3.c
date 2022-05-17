// Write aC program to find nmaximum and minimum between two numbers using functions

#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main()
{
    int number1, number2;
    printf("Please enter two numbers: ");
    scanf("%d%d", &number1, &number2);

    printf("The maximum is: %d\n", max(number1, number2));
    printf("The manimum is: %d", min(number1, number2));

    return 0;
}
