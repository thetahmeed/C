#include<stdio.h>

int main(){

    float p, t, r, compound, simple;

    printf("Enter p, t and r: ");
    scanf("%f %f %f", &p, &t, &r);

    compound = p * ((1 + r / 100) * (t - 1));
    simple = (p * t * r) / 100;

    printf("The compound imterest is %.2f\n", compound);
    printf("The simple imterest is %.2f", simple);

    return 0;
}