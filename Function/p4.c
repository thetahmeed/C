// Write aC program to check whether a number is even or odd using functions

#include <stdio.h>

void checkEvenOrOdd(int n)
{
    if (n % 2 == 0)
        printf("%d is an Even number.", n);
    else
        printf("%d is a Odd number.", n);
}

int main()
{
    int userInput;

    printf("Please enter any number: ");
    scanf("%d", &userInput);

    checkEvenOrOdd(userInput);

    return 0;
}
