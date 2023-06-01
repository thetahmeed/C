#include<stdio.h>

int main(){
    int height, base, area;

    printf("Please enter height and base: ");
    scanf("%d %d", &height, &base);

    area = 0.5 * (base * height);

    printf("The area of the triangle is %d", area);

    return 0;
}
