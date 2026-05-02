#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("a, b, c are same");
    }
    else
    {
        // a and b same
        if (a == b)
        {
            if (c > a)
            {
                printf("a, b same and c is max");
            }
            else
            {
                printf("a, b same and c is min");
            }
        }

        // b and c same
        else if (b == c)
        {
            if (a > b)
            {
                printf("b, c same and a is max");
            }
            else
            {
                printf("b, c same and a is min");
            }
        }

        // a and c same
        else if (a == c)
        {
            if (b > a)
            {
                printf("a, c same and b is max");
            }
            else
            {
                printf("a, c same and b is min");
            }
        }

        // all different
        else
        {
            if (a > b)
            {
                if (a > c)
                {
                    printf("a is max");
                }
                else
                {
                    printf("c is max");
                }
            }
            else
            {
                if (b > c)
                {
                    printf("b is max");
                }
                else
                {
                    printf("c is max");
                }
            }
        }
    }

    return 0;
}