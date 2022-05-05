#include<stdio.h>
void main(){
    int i;
    int iAmAnArray [12], sum = 0;
    printf("Enter 12 values: ");
    for (i = 0; i < 12; i++){
        scanf("%d", &iAmAnArray[i]);
    }
    for (i = 0; i < 12; i++){
        sum = sum + iAmAnArray[i];
    }
    printf("Sum is: %d, ", sum);
}