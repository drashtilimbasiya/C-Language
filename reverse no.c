#include<stdio.h>
int main()
{
    //Using for loop first print number in user order after reverse it
    int i,n;
    printf("Enter the number of elements: ");   
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d ",i);

    }
    printf("\n");
    printf("Reverse order: ");
    for ( i = n; i >=1; i--)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}