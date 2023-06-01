#include<stdio.h>
int main(){
    int monthNumber;
    printf("Enter month number: ");
    scanf("%d", &monthNumber);
    if(monthNumber == 1){
        printf("January");
    } else if(monthNumber == 2) {
         printf("February");
    } else if(monthNumber == 3) {
         printf("March");
    } else if(monthNumber == 4) {
         printf("April");
    } else if(monthNumber == 5) {
         printf("May");
    } else if(monthNumber == 6) {
         printf("June");
    } else if(monthNumber == 7) {
         printf("July");
    } else if(monthNumber == 8) {
         printf("Augest");
    } else if(monthNumber == 9) {
         printf("September");
    } else if(monthNumber == 10) {
         printf("Octobar");
    } else if(monthNumber == 11) {
         printf("November");
    } else if(monthNumber == 12) {
         printf("December");
    } else {
        printf("This is a invalid input");
    }
    return 0;
}
