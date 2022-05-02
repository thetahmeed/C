// Write a C program to find length of a string

#include<stdio.h>

int main(){

    int i, count = 0;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; name[i] != '\0' ; i++)
    {
        count++;
    }
    
    printf("Total character is: %d", count);


    return 0;
}