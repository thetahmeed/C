#include<stdio.h>
#include<math.h>

int main(){
    int base, power, result;

    printf("Please enter any base: ");
    scanf("%d", &base);

    printf("Please enter any power: ");
    scanf("%d", &power);

    result = pow(base, power);

    printf("The result is : %d", result);

    return 0;
}
