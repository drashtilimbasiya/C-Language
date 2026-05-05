#include<stdio.h>
int main()
{
    //Find the maximum element in an array.
    
    int n, i, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum element in the array is: %d", max);
    return 0;
}