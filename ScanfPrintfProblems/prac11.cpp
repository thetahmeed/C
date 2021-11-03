#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5;

    float totalNumber, averageNumber, percentage;

    printf("Please enter number of five subject: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    totalNumber = sub1 + sub2 + sub3 + sub4 + sub5;
    averageNumber = totalNumber / 5;
    percentage = (totalNumber / 500) * 100;

    printf("\nThe total number is: %f", totalNumber);
    printf("\nThe average number is: %f", averageNumber);
    printf("\nThe percentage is: %f", percentage);

    return 0;
}