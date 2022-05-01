#include<stdio.h>
#include<string.h>
void main(){
    char firstName[30], lastName[30];
    printf("Enter firstName: ");
    fgets(firstName, sizeof(firstName), stdin);
    printf("Enter lastName: ");
    fgets(lastName, sizeof(lastName), stdin);
    printf("The result is: %s", strcat(firstName, lastName));
}
