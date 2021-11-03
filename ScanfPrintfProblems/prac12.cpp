#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitMoney, lossMoney;

    printf("Please the cost price: ");
    scanf("%f", &costPrice);

    printf("Please enter the selling price: ");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice){
        profitMoney = sellingPrice - costPrice;

        printf("He made profit.\n");
        printf("And profit is %f", profitMoney);

    } else{
        lossMoney = costPrice - sellingPrice;

        printf("He made loss.\n");
        printf("And loss is %f", lossMoney);
    }

    return 0;
}