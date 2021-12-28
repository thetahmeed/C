#include <stdio.h>

void main(){
    int i, n, sum = 0;
    printf("Please enter n: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n){
        if (i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    printf("The sum is %d\n", sum);
}