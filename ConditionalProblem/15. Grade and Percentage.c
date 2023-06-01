#include<stdio.h>
void main() {
    int a, b, c, d, e;
    float percentage;
    printf("Please enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    percentage = ((a + b + c + d + e) / 500) * 100;
    printf("Percentage %.2f\n", percentage);
    if(percentage >= 90){
        printf("Grade A");
    }else if(percentage >= 80){
        printf("Grade B");
    }else if(percentage >= 70){
        printf("Grade C");
    }else if(percentage >= 60){
        printf("Grade D");
    }else if(percentage >= 40){
        printf("Grade E");
    }else{
        printf("Grade F");
    }
}