// Write a C program to print all negative clements in an array

#include <stdio.h>
void main() {
    int array[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    printf("Negetive numbers are: ");
    for (i = 0; i < 5; i++){
        if (array[i] < 0){
            printf("%d, ", array[i]);
        }   
    }
}