#include<stdio.h>

int main()
{
    int v = 3;
    printf("Address of V is %u", &v);
    printf("\nValue of V is %u", v);
    printf("\nValue of V is %u", *(&v));
    return 0;
}
