#include<stdio.h>
int main()
{
    //Prime number is a number that is only divisible by 1 and itself.
    //2,3,5,7,11 are prime numbers.
    int n, i, flag = 0;
    printf("Enter an integer: ");   
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
        return 0;
    }
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}