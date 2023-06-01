#include<stdio.h>
int main()
{
    int i,j,n,min,temp, a[20] ;
    printf("Enter the Element number :");
    scanf("%d",&n);
    printf("Enter the Elements :");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;

        for(j=0;j<n;j++)
        {
            if (a[j] <  a[min]);
            {
                min=j;
            }
        }
        temp =a[i];
        a[i]= a[min];
        a[min]=temp;
    }
    for(i=0; i<n; i++)
    {
        printf("\n A[%d]=%d",i,a[i]);
    }
    return 0;
}
