

// even or odd

#include <stdio.h>

int main() {

    int anyNumber;

    printf("Enter any number: ");
    scanf("%d", &anyNumber);

    if(anyNumber % 2 == 0){
        printf("%d is a even number", anyNumber);
    }else{
        printf("%d is a odd number", anyNumber);
    }

    return 0;
}