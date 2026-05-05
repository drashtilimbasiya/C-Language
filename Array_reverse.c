#include<stdio.h>
int main()
{
    //Find reverse of an array.
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements in reverse order are: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}