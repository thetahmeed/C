#include<stdio.h>
void calculation(int r, float *a, float *p);
void main(void){
    int radius;
    float area, perimeter;
    printf('Please enter the radius: ');
    scanf("%d", &radius);
    calculation(radius, &area, &perimeter);
    printf("Area is %.2f", area);
    printf("Perimeter is %.2f", perimeter);
}
void calculation(int r, float *a, float *p){
    *a=3.1416*r*r;
    *p=2*3.1416*r; 
}