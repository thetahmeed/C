

// maximum and minimum among three numbers

#include <stdio.h>

int main()
{

    int num1, num2, num3, max, min;

    printf("Please enter three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            max = num1;
        } else {
            max = num3;
        }

        if(num2 < num3){
            min = num2;
        }else{
            min = num3;
        }

    } else {
        if (num2 > num3) {
            max = num2;
        } else {
            max = num3;
        }

        if(num1 < num3){
            min = num1;
        }else{
            min = num3;
        }
    }

    printf("The minimum number is %d \n", min);
    printf("The maximum number is %d", max);

    return 0;
}