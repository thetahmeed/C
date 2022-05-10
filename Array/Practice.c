// #include<stdio.h>

// void printArray(int a[10], int starting, int length);

// int main()
// {
//     int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//     printArray(array, 0, 10);

//     return 0;
// }

// void printArray(int a[], int starting, int length){

//     if (starting >=length)
//     {
//         return;
//     }

//     printf("%d", a[starting]);

//     printArray(a, starting+1, length);
// }

// Write a C program to find sum of all array elements - using recursion
// #include<stdio.h>

// int sumOfArray(int array[], int srarting, int length);

// int main()
// {
//     int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//     printf("The result is: %d", sumOfArray(array, 0, 10));

//     return 0;
// }

// int sumOfArray(int array[], int starting, int length){
//     if (starting >= length)
//     {
//         return 0;
//     }

//     return array[starting] + sumOfArray(array, starting+1, length);
// }

// Write a C program to fnd maximum and minimum clemcnt in an array - using recursion
#include <stdio.h>

int sumOfAllElements(int array[], int starting, int lenth);

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("The result is: %d", sumOfAllElements(array, 0, 10));

    return 0;
}

int sumOfAllElements(int array[], int starting, int length)
{
    int max;

    if (starting >= length - 2)
    {
        if (array[starting] > array[starting + 1])
            return array[starting];
        else
            return array[starting + 1];
    }

    max = sumOfAllElements(array, starting + 1, length);

    if (array[starting] > max)
        return array[starting];
    else
        return max;
}
