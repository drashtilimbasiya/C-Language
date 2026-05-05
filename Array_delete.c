#include<stdio.h>
int main()
{
    //first print array values after delete any variable and again print array values after delete any variable.
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position of the element to delete: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position!");
        return 0;
    }
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("The elements in the array after deletion are: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}