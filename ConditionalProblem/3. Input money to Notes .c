#include<stdio.h>

int main()
{
    int amount, note2, note5, note10, note20, note50, note100, note200, note500, note1000;

    note2 = 0;
    note5 = 0;
    note10 = 0;
    note20 = 0;
    note50 = 0;
    note100 = 0;
    note200 = 0;
    note500 = 0;
    note1000 = 0;

    printf("Enter any number: ");
    scanf("%d", &amount);

    if(amount >= 1000){
        note1000 = amount / 1000;
        amount = amount % 1000;
    }

    if(amount >= 500){
        note500 = amount / 500;
        amount = amount % 500;
    }

    if(amount >= 200){
        note200 = amount / 200;
        amount = amount % 200;
    }

    if(amount >= 100){
        note100 = amount / 100;
        amount = amount % 100;
    }

    if(amount >= 50){
        note50 = amount / 50;
        amount = amount % 50;
    }

    if(amount >= 20){
        note20 = amount / 20;
        amount = amount % 20;
    }

    if(amount >= 10){
        note10 = amount / 10;
        amount = amount % 10;
    }

    if(amount >= 5){
        note5 = amount / 5;
        amount = amount % 5;
    }

    if(amount >= 2){
        note2 = amount / 2;
        amount = amount % 2;
    }

    printf("\n1000 taka notes: %d\n", note1000);
    printf("500 taka notes: %d\n", note500);
    printf("200 taka notes: %d\n", note200);
    printf("100 taka notes: %d\n", note100);
    printf("50 taka notes: %d\n", note50);
    printf("20 taka notes: %d\n", note20);
    printf("10 taka notes: %d\n", note10);
    printf("5 taka notes: %d\n", note5);
    printf("2 taka notes: %d\n", note2);
    printf("1 taka notes: %d\n", amount);

    return 0;
}
