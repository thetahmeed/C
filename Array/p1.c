// 6. Write a C program to read and print elements of array. using recursion

#include <stdio.h>
void print(int array[], int start, int arraySize)
{
    if(start == arraySize){
        return;
    }else{
       printf("%d ", array[start]);
       print(array, start+1, arraySize);
    } 
}
void main(){
    int array[100], arraySize, i;
    printf("Enter the size of the Array: ");
    scanf("%d", &arraySize);
    printf("Enter %d numbers: ", arraySize);
    for (i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }
    printf("The array is: ");
    print(array, 0, arraySize);
}
