#include <stdio.h>

void main()
{
    float userInputUnit, payableAmount;

    printf("Pease enter unit: ");
    scanf("%f", &userInputUnit);

    if (userInputUnit <= 200)
    {
        payableAmount = userInputUnit * 5.72;
        printf("You have to pay %.2f taka: ", payableAmount);
    }
    else if (userInputUnit > 200 && userInputUnit <= 300)
    {
        payableAmount = (200 * 5.72) + ((userInputUnit - 200) * 6);
        printf("You have to pay %.2f taka: ", payableAmount);
    }else{
        payableAmount = (200 * 5.72) + (100 * 5.72) + ((userInputUnit - 300) * 6.34);
        printf("You have to pay %.2f taka: ", payableAmount);
    }
}