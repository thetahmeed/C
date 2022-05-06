#include <stdio.h>

int fact(int);

int main()
{
    int userInput;
    printf("Enter any number to get the factorial: ");
    scanf("%d", &userInput);

    printf("The factorial od %d is %d", userInput, fact(userInput));

    return 0;
}

int fact(int copyOfInput)
{
    // Without using recursion
    int result = 1;

    // Way 1
    // for (copyOfInput; copyOfInput; copyOfInput--)
    // {
    //     result = result * copyOfInput;
    // }

    // Way 2
    // while (copyOfInput > 0)
    // {
    //     result = result * copyOfInput;
    //     copyOfInput--;
    // }
    
    // Way 3
    // Using recursion
    if (copyOfInput == 1)
    {
        return 1;
    }else{
        return copyOfInput * fact(copyOfInput-1);
    }
}