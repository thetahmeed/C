#include<stdio.h>

void main(){
    char input;
    printf("Enter any alphabet: ");
    scanf("%c", &input);
    if(input == 'a'){
        printf("%c is an vowel", input);
    }else if(input == 'e'){
        printf("%c is an vowel", input);
    }else if(input == 'i'){
        printf("%c is an vowel", input);
    }else if(input == 'o'){
        printf("%c is an vowel", input);
    }else if(input == 'u'){
        printf("%c is an vowel", input);
    }else{
         printf("%c is a consonant", input);
    }
}
