#include <stdio.h>

int main()
{
    // 2. Perimeter & area of a rectangle
    int length, breadth, perimeter, area;
    printf("Enter length and breadth of a rectangle: ");
    scanf("%d %d", &length, &breadth);

    perimeter = (length + breadth) * 2;
    printf("\nThe Perimeter is %d.", perimeter);

    area = length * breadth;
    printf("\nThe area is %d.", area);

    return 0;
}