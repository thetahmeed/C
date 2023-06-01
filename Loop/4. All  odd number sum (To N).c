#include<stdio.h>

int main()
{
    int i;
    int n;
    int sum=0;

    printf("Please enter n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if(i%2!00=0){
            sum = sum+i;
        }
    }

     printf("The sum of all number is %d\n", sum);


    return 0;
}
