#include<stdio.h>
int main()
{
    //First string print and after print upper case and lower case of string and difference between upper and lower case
    char str[100];
    int i,n,count=0;
    printf("enter string: ");
    scanf("%s",&str);
    printf("string is: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("length of string is: %d\n",count);
    //count upper case 
    int upper=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
    }
    //count lower case
    int lower=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
    }
    printf("upper case letters in string: %d\n",upper);
    printf("lower case letters in string: %d\n",lower);
    return 0;
}