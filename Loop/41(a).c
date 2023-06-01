#include<stdio.h>
void main(){
    int line = 5, i, j;
    for (i = 1; i <= line; i++){
        for (j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}