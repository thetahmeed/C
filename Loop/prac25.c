#include <stdio.h>
void main(){
    int i, j, n, sum = 0, nextPosition = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = i; j >= 1; j--) {
            nextPosition = nextPosition + j;
        }
        sum = sum + nextPosition;
        nextPosition = 0;
    }
    printf("The sum is: %d", sum);
}