#include<stdio.h>
#include<math.h>

void main(){
    int base, power, result;

    printf("Please enter base and power: ");
    scanf("%d %d", &base, &power);

    result = pow(base, power);

    printf("%d power %d is %d", base, power, result);
}