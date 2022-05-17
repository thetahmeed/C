// Write a C program to find diameter, circumference and area of circle using functions
#include <stdio.h>
#define PI 3.1416
float diameter(int radius){
    return radius + radius;
}
float circumference(int radius){
    return 2 * PI * radius;
}
float area(int radius){
    return PI * radius * radius;
}
void main() {
    int radius;
    printf("Enter the radius of a triangle: ");
    scanf("%d", &radius);
    printf("\nThe diameter is : %.2f", diameter(radius));
    printf("\nThe circumference is : %.2f", circumference(radius));
    printf("\nThe area is : %.2f", area(radius));
}