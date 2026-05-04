#include<stdio.h>
int main()
{
    //1,2,145,40585 are strong numbers
    //Calculation like 145 → 1!+4!+5!=1+24+120=145 this.
    //Number has it self their strong like above number
    int n, sum = 0, temp, r, fact;
    printf("Enter an integer: ");   
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact *= i;
        }
        sum += fact;
        n = n / 10;
    }
    if (sum == temp)
        printf("%d is a Strong number.", temp);
    else
        printf("%d is not a Strong number.", temp);
    return 0;
}