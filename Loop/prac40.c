#include <stdio.h>
void main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}