#include<stdio.h>

int main()
{

    int l, b, area, perimeter;

    printf("Enter l and b: ");

    scanf("%d%d", &l, &b);

    area = l*b;

    perimeter = 2*(l+b);

    printf("The are is %d\n", area);
    printf("The perimeter is %d", perimeter);

    return 0;
}

