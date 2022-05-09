// Write a C program to find second largest element in an array

#include<stdio.h>
void main() {
    int array[10], arraySize, i, max = 0;
    printf("Enter the array size: ");
    scanf("%d", &arraySize);
    printf("Enter some numbers: ");
    for (i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < arraySize; i++){
        if (array[i] > max); {
            max = array[i];
        }
    }
    printf("Maximum mumber is: %d", max);
}