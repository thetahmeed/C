#include<stdio.h>

void main(){
    int i, n, sum = 0;

    printf("Please enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        if (i!=n){
            printf("%d + ", i);
            }
        else
        {
            printf("%d = %d", i, sum);
        }
        
        
    }

}