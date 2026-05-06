#include<stdio.h>
int main()
{
    //first print 2d array and print it and after that after cpopy 2d array in second variable and print it
    int a[100][100], b[100][100], i, j, n;
    printf("enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter a[%d][%d]: ", i, j);
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
    //copying array a to b
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j] = a[i][j];
        }
    }
    printf("value of copied array in b variable: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}