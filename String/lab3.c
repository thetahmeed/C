#include<stdio.h>
#include<string.h>
void main(){
    char string1[30], string2[30];
    printf("Enter string1: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Enter string2: ");
    fgets(string2, sizeof(string2), stdin);
    printf("The result is: %d", strcmp(string1, string2));
}
