#include <stdio.h>
#include <math.h>

void main(){
    int n, lastDigit, firstDigit, digit, divider, swap;
    printf("Please enter any number: ");
    scanf("%d", &n);
    
    digit = log10(n);
    divider = pow(10, digit);

    firstDigit = n;
    while (firstDigit > 10) {
        firstDigit = firstDigit / 10;
    }
    n = n % divider;

    lastDigit = n % 10;
    n = n / 10;
    
    swap = lastDigit * divider + n * 10 + firstDigit;

    printf("Swap value is %d", swap);
}