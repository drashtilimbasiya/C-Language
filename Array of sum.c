#include<stdio.h>
int main()
{

    //first print the number from user and print number form of matrix and calculate sum of columns

    //first print the number from user and calculate sum of rows
    int a[100][100],i,j,n;
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
    //sum of rows
    printf("sum of rows:\n");
    for(i=0;i<n;i++)
    {
        int sum = 0;
        for(j=0;j<n;j++)
        {
            sum += a[i][j];
        }
        printf("sum of row %d is: %d\n", i+1, sum);
    }
    //sum of columns
    printf("sum of columns:\n");
    for(j=0;j<n;j++)
    {
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += a[i][j];
        }
        printf("sum of column %d is: %d\n", j+1, sum);
    }
    return 0;
}