#include<stdio.h>
int main(){
    char input;
    printf("Enter any alphabet: ");
    scanf("%c", &input);
    if(input >= 'a' && input <= 'z'){
         printf("%c is a lowercase character", input);
    }else if(input >= 'A' && input <= 'Z'){
         printf("%c is a uppercase character", input);
    }
    return 0;
}
