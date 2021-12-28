#include<stdio.h>

void main(){
    int i, n;

    printf("Please enter n: ");
    scanf("%d", &n);

    i = 1;

    while (n>=1)
    {
        printf("%d\n", n);
        n--;
    }
    
}