#include<stdio.h>
int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%s",&str);
    printf("string is: %s\n",str);
    //reverse string
    char rev[100];
    int i,j;
    for(i=0;str[i]!='\0';i++);
    for(j=0,i=i-1;i>=0;i--,j++)
    {
        rev[j]=str[i];
    }
    rev[j]='\0';
    printf("reverse string is: %s\n",rev);
    return 0;
}