#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of times to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}