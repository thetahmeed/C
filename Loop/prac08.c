#include <stdio.h>

void main(){
    int n, lastDigit, firstDigit;
    printf("Please enter any number: ");
    scanf("%d", &n);
    lastDigit = n % 10;
    printf("The last digit of %d is %d\n", n, lastDigit);
    firstDigit = n;
    while (firstDigit > 10) {
        firstDigit = firstDigit / 10;
    }
    printf("The first digit of %d is %d", n, firstDigit);
}