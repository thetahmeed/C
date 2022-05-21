#include <stdio.h>
void main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = n; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
}