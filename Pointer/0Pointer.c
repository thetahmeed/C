#include<stdio.h>
void main(void){
    int v=100, *p;
    p = &v;
    printf("%d\n", &v); // Location of v
    printf("%d\n", v);  // Value of v
    printf("%d\n", p); // Location of v which is stored in p
    printf("%d\n", *p); // Location value of v which is stored in p
    printf("%d\n", &p); // Location of p
}