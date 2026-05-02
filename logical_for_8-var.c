#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Enter eight numbers: ");
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
   if(a>b && a>c && a>d && a>e && a>f && a>g && a>h)  
   {
         printf("%d is the largest number",a);
    }
    else if(b>c && b>d && b>e && b>f && b>g && b>h)
    {
         printf("%d is the largest number",b);
    }
    else if(c>d && c>e && c>f && c>g && c>h)
    {
         printf("%d is the largest number",c);
    }
    else if(d>e && d>f && d>g && d>h)
    {
         printf("%d is the largest number",d);
    }
    else if(e>f && e>g && e>h)
    {
         printf("%d is the largest number",e);
    }
    else if(f>g && f>h)
    {
         printf("%d is the largest number",f);
    }
    else if(g>h)
    {
         printf("%d is the largest number",g);
    }
    else
    {
         printf("%d is the largest number",h);
    }
    return 0;
}