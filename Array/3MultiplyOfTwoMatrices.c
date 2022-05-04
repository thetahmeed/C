#include <stdio.h>
int main()
{
    int array1[2][2], array2[2][2], resultArray[2][2], i, j, k;

    // Int. the value of the first array
    printf("Enter value of Matrix 1 (2*2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    // Int. the value of the second array
    printf("\nEnter value of Matrix 2 (2*2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    // Calculating the result
    printf("\nThe result is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            resultArray[i][j] = 0;
            
            for (k = 0; k < 2; k++)
            {
                resultArray[i][j] = resultArray[i][j] + (array1[i][k] * array2[k][j]);
            }
        }
    }

    // Printing the result
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t", resultArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}