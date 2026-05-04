#include<stdio.h>
int main()
{
    //Print palindrome number using while loop
    //121, 131, 1221 are palindrome numbers.
    int n, temp, r, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (temp == rev)
        printf("%d is a palindrome number.", temp);
    else
        printf("%d is not a palindrome number.", temp);
    return 0;
}