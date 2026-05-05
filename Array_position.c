#include<stdio.h>
int main()
{
    //Print array variable with position using for loop.
    //Like arr[0]=10, arr[1]=20, arr[2]=30 etc.
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array with their positions are: \n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}