#include<stdio.h>
int main()
{
    //Print array single dimensional array and find second largest number in array and print it
    int a[100], i, n, largest, secondLargest;
    printf("enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value of array: ");
        scanf("%d",&a[i]);
    }
    printf("value of array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //finding largest and second largest number
    largest = secondLargest = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }   
    printf("\nSecond largest number in the array is: %d\n", secondLargest);
    return 0;
}