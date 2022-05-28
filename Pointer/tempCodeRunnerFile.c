#include<stdio.h>
void swap(int a, int b);
void main(void){
    int x=2, y=3;
    swap(x, y);
}
void swap(int a, int b){
    int temp=a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}