#include<stdio.h>

void main (){
    int anyNumber;
    printf("Please enter any number: ");
    scanf("%d", &anyNumber);
    if(anyNumber % 11 == 0 && anyNumber % 5 == 0){
        printf("%d is divisible by 11 and 5\n", anyNumber);
    }else{
         printf("%d This number is not divisible by 11 and 5\n", anyNumber);
    }
}