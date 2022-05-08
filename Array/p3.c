// Write a C program to find sum of all array elements. - using recursion

#include<stdio.h>
int result(int array[], int start, int arraySize){
    if (start == arraySize){
        return 0;
        }else{
        return array[start] + result(array, start+1, arraySize);
    }   
}
void main(){
    int array[5], i;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    printf("The result is: %d", result(array, 0, 5));
}