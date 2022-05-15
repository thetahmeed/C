#include <stdio.h>
int n1 = 0, n2 = 1, n3;
void fibonacci(int n){
    if (n > 0){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        fibonacci(n - 1);
    }
}
void main(){
    int userInput;
    printf("How many fibonacci number you want to print: ");
    scanf("%d", &userInput);
    printf("0 ");
    fibonacci(userInput - 1);
}
