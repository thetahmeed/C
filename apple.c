#include <stdio.h>

int main()
{

    //  What is a variable: Is a kind of container that can hold anything

    // 0. Declaration of a variable
    int iAmANumber;
    
    // 1. Assigning a value
    iAmANumber = 69;

    // 2. Printing 
    printf("This number = %d\n", iAmANumber);

    // 3. Calculation inside printf
    printf("This number + 1 = %d\n", iAmANumber + 1 );
    printf("This number - 9 = %d", iAmANumber - 9);


    // Calculation between two number a and b

    // 0. Declaring veriable
    int a = 10;
    int b = 20;

    // 1. Print and calculation
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);

    return 0;
}
