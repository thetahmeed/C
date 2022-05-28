#include <stdio.h>

int FactorialOf(int input)
{
    if (input == 0)
        return 1;

    return input * FactorialOf(input - 1);
}

int main()
{
    int result = FactorialOf(5);

    printf("The result is: %d", result);

    return 0;
}