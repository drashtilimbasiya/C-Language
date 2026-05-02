#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   if(a>b)  
    {
            if(a>c)
            {
                  if(a>d)
                  {
                     if(a>e)
                     {
                            printf("%d is the largest number",a);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
                  else
                  {
                     if(d>e)
                     {
                            printf("%d is the largest number",d);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
            }
            else
            {
                  if(c>d)
                  {
                     if(c>e)
                     {
                            printf("%d is the largest number",c);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
                  else
                  {
                     if(d>e)
                     {
                            printf("%d is the largest number",d);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
            }
     }
     else
     {
            if(b>c)
            {
                  if(b>d)
                  {
                     if(b>e)
                     {
                            printf("%d is the largest number",b);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
                  else
                  {
                     if(d>e)
                     {
                            printf("%d is the largest number",d);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
            }
            else
            {
                  if(c>d)
                  {
                     if(c>e)
                     {
                            printf("%d is the largest number",c);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
                  else
                  {
                     if(d>e)
                     {
                            printf("%d is the largest number",d);
                     }
                     else
                     {
                            printf("%d is the largest number",e);
                     }
                  }
            }
    }
     return 0;
}