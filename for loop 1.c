#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of times to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        printf("\n");
    }
    return 0;
}
