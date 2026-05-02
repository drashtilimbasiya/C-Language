#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
    {
         if(a==c)
         {
              printf("All numbers are same");
         }
         else
         {
              if(a>c)
              {
                   printf("%d is the largest number",a);
              }
              else
              {
                   printf("%d is the largest number",c);
              }
         }
    }
    else if(b==c)
    {
         if(b>a)
         {
              printf("%d is the largest number",b);
         }
         else
         {
              printf("%d is the largest number",a);
         }
    }
    else if(a==c)
    {
         if(a>b)
         {
              printf("%d is the largest number",a);
         }
         else
         {
              printf("%d is the largest number",b);
         }
        }
    else
        {
            if(a>b)
            {
                if(a>c)
                {
                    printf("%d is the largest number",a);
                }
                else
                {
                    printf("%d is the largest number",c);
                }
            }
            else
            {
                if(b>c)
                {
                        printf("%d is the largest number",b);
                }
                else
                {
                        printf("%d is the largest number",c);
                }
            }
        }
    return 0;
}