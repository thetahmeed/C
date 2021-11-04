#include <stdio.h>
int main()
{
    int population, populationMen, populationWomen, populationLiterate, literateMen, literateWomen, populationIlliterate, illiterateMen, illiterateWomen;
    
    printf("Enter the population: ");
    scanf("%d", &population);

    populationMen = (population * 51) / 100;
    populationWomen = population - populationMen;

    populationLiterate = (population * 49) / 100;
    literateMen = (population * 40) / 100;

    literateWomen = populationLiterate - literateMen;
    populationIlliterate = (population - populationLiterate);

    illiterateMen = populationMen - literateMen;
    illiterateWomen = populationWomen - literateWomen;

    printf("Illiterate men is : %d\n", literateMen);
    printf("Illiterate women is : %d", literateWomen);
    
    return 0;
}
