#include<stdio.h>
int main()
{
    //It is 1-d array
    // int a[100],i,n;
    // printf("enter size of array: ");
    // scanf("%d",&n);
    // for(i=0;i<n;i++)
    // {
    //     printf("enter value of array: ");
    //     scanf("%d",&a[i]);
    // }
    // printf("value of array is: ");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",a[i]);
    // }
    // return 0;


    //It is 2-d array
    int a[100][100],i,j,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter value of array: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("value of array is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}