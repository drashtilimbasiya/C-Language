#include<stdio.h>
int main()
{
    //Array variable copy in another array.
    //Like a[0]=10, a[1]=20, a[2]=30  into b[0]=10, b[1]=20, b[2]=30 etc.
    //first  print a[0]=10, a[1]=20, a[2]=30 etc. then copy into b array and print b[0]=10, b[1]=20, b[2]=30 etc.
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
  printf("The elements in the array with their positions are: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("\nThe elements in the array b are:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
    return 0;
}