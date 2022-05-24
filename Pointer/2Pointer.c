#include<stdio.h>
void main(){
    int v=3, *p;
    p=&v;
    printf("Address of V is %u", &v);
    printf("\nAddress of P is %u", &p);
    printf("\nValue of P is %u", p);
    printf("\nValue of V is %u", v);
    printf("\nValue of V is %u", *(&v));
    printf("\nValue of V is %u", *p);
}
