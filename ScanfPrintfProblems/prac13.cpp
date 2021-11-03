#include <stdio.h>
int main()
{
    float basicSalary, medicalAllowancee, houseRent, transportAllowance, grossSalary;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    medicalAllowancee = basicSalary * 0.35;
    houseRent = basicSalary * 0.25;
    transportAllowance = basicSalary * 0.20;

    grossSalary = basicSalary + medicalAllowancee + houseRent + transportAllowance;

    printf("\nGross salary is: %f", grossSalary);

    return 0;
}