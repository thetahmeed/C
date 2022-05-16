// Write a C program to find cube of any number using function

#include<stdio.h>
#include<math.h>

int cube(int n){
    return pow(n, 3);
}

int main()
{   
    int userInput;

    printf("Please enter any number to find the cube: ");
    scanf("%d", &userInput);

    printf("The cube of %d is: %d", userInput, cube(userInput));

    return 0;
}
