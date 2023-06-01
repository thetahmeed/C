#include<stdio.h>

int main() {
    int anyNumber;
    printf("Please enter any number: ");
    scanf("%d", &anyNumber);
    if(anyNumber > 0){
        printf("%d is a positive number\n", anyNumber);
    }else if(anyNumber < 0){
        printf("%d is a negative number\n", anyNumber);
    }else{
         printf("%d is a negative zero\n", anyNumber);
    }
    return 0;
}
