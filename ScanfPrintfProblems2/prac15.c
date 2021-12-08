#include<stdio.h>

int main(){

    int days, year, week;

    printf("Enter days: ");
    scanf("%d", &days);

    year = days / 365;
    week = (days % 365) / 7;
    days = days - ((year * 365) + (week * 7));

    printf("%d years, %d weeks and %d days", year, week, days);

    return 0;
}