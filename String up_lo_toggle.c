#include<stdio.h>
int main()
{
    //String upper to lower and lower to upper and toggle case of string
    char str[100];
    int i;
    printf("enter string: ");
    scanf("%s",&str);
    printf("string is: %s\n",str);
    //toggle case of string
    char toggle[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            toggle[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            toggle[i]=str[i]-32;
        }
        else
        {
            toggle[i]=str[i];
        }
    }
    toggle[i]='\0';
    printf("toggle case of string is: %s\n",toggle);
    return 0;
}