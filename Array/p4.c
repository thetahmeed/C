// Write a C program to fnd maximum and minimum clemcnt in an array. - using recursion

#include<stdio.h>
int maximumNumber(int array[], int lastIndexNumber, int max){
    if(lastIndexNumber == 0){
        return max; 
    }else{
        if(array[lastIndexNumber] > max){
            max = array[lastIndexNumber];
        }  
        return maximumNumber(array, lastIndexNumber-1, max);
    }
}
int manimumNumber(int array[], int lastIndexNumber, int min){
    if(lastIndexNumber == 0){
        return min; 
    }else{
        if(array[lastIndexNumber] < min){
            min = array[lastIndexNumber];
        }  
        return manimumNumber(array, lastIndexNumber-1, min);
    }
}
void main(){
    int array[10], arraySize, i, firstElement;
    printf("Enter the array size: ");
    scanf("%d", &arraySize);
    printf("Enter some numbers: ");
    for (i = 0; i < arraySize; i++){
        scanf("%d", &array[i]);
    }
    firstElement = array[0];
    printf("The maximum number is: %d\n", maximumNumber(array, arraySize-1, firstElement));
    printf("The minimum number is: %d\n", manimumNumber(array, arraySize-1, firstElement));
}
