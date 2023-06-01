#include <stdio.h>
void main(){
    int i, j, k, n = 5, spaces, spaces2;
    for (i = 1; i <= n; i++){
        for (j = n; j >= i; j--){
            printf("*");
            spaces = n - (n - i);
        }
        printf("\n");
        if (i < n){
            for (k = 1; k <= spaces; k++){
                printf(" ");
            }
            spaces = 0;
        }else{
            spaces = n - (n - i) - 2;
        }
    }
    for (i = 1; i <= spaces; i++){
         printf(" ");
    }
    for (i = n; i >= 1; i--){
        if (i==n) {
            continue;
        }
        for (j = i; j <= n; j++){
            printf("*");
            spaces2 = n - (n - i) - 2;
        }
        printf("\n");
        for (k = 1; k <= spaces2; k++){
            printf(" ");
        }
        spaces2 = 0;
    }
}
