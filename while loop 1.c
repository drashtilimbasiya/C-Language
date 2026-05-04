#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of times to print: ");
    scanf("%d",&n);
    i = 1;
    while (i <= n)
    {
        printf("%d ",i);
        printf("\n");
        i++;
    }
    return 0;
}