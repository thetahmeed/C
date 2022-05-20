#include<stdio.h>
void main(){
    int i, j, n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + (i * i);
        if (i!=n){
            printf("%d^2+", i);
        }else{
            printf("%d^2=", i);
        }
    }
    printf("%d", sum);
}