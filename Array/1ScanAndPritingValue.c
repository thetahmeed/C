#include<stdio.h>

int main(){

    int i;
    int iAmAnArray [12];

    printf("Enter 12 values: ");

    for (i = 0; i < 12; i++)
    {
        scanf("%d", &iAmAnArray[i]);
    }

    for (i = 0; i < 12; i++)
    {
        printf("%d, ", iAmAnArray[i]);
    }

    return 0;
}