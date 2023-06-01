#include<stdio.h>
int main(){
    int weekNumber;
    printf("Enter week number: ");
    scanf("%d", &weekNumber);
    if(weekNumber == 1){
        printf("Saturday");
    }else if(weekNumber == 2){
         printf("Sunday");
    }else if(weekNumber == 3){
        printf("Monday");
    }else if(weekNumber == 4){
        printf("Tuesday");
    }else if(weekNumber == 5){
        printf("Wednesday");
    }else if(weekNumber == 6){
         printf("Thursday");
    }else if(weekNumber == 7){
         printf("Friday");
    }else{
        printf("Invalid number input");
    }
    return 0;
}
