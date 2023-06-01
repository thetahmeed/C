#include<stdio.h>
int main(){
    char input;
    printf("Enter any alphabet: ");
    scanf("%c", &input);
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
         printf("%c is a character", input);
     }else if(input >= '0' && input <= '9'){
         printf("%c is a number", input);
     }else{
         printf("%c is an special character", input);
    }
    return 0;
}