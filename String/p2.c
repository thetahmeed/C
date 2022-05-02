// Write a C program to copy one string to another string 

#include <stdio.h>

int main()
{
    char string1[30];
    char string2[30];
    int i;
    
    printf("Enter the first string: ");
    gets(string1);
    
    for(i=0; string1[i]!='\0'; i++)
    {
        string2[i] = string1[i];
    }

    string2[i] = '\0';

    printf("First string is %s\n", string1);
    printf("Second string is %s", string2);
   
    return 0;
}