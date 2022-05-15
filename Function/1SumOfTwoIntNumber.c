#include<stdio.h>
int Sum(int a, int b) {
   return a + b;
}
void main() {
   int number1, number2;
   printf("Please enter any two number: ");
   scanf("%d %d", &number1, &number2);
   printf("Result: %d", Sum(number1, number2));
}