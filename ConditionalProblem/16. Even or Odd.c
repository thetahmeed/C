#include<stdio.h>

int main(){
    int givenNumber = 5;

    printf("Please enter any number: ");
    scanf("%d", &givenNumber);

    givenNumber%2 == 0 ?
        printf("%d is even number", givenNumber) :
        printf("%d is odd number.", givenNumber);

    return 0;
}
