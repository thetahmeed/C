
// In this program we will convert days to year, weeks and days

#include<stdio.h>

int main(){
    int days, years, weeks;

    printf("Please enter days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("%d years, %d weeks, %d days", years, weeks, days);

    return 0;
}
