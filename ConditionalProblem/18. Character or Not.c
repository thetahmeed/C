#include<stdio.h>

int main(){
    char thing;

    printf("Please enter any thing: ");
    scanf("%c", &thing);

    if((thing >= 'a' && thing <= 'z') || (thing >= 'A' && thing <= 'Z')){
        printf("%c is a character", thing);
    }else{
        printf("%c is not a character", thing);
    }

    return 0;
}
