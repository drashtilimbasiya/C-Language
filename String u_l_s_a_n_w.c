#include<stdio.h>
int main()
{
    
    char str[100];
    int i;
    int upper=0,lower=0;
    int number=0,space=0;
    int special=0,alphabet=0;
    int word=1;
    printf("enter string: ");
    scanf("%[^\n]s",&str);
    printf("string is: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
            alphabet++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lower++;
            alphabet++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
        else if(str[i]==' ')
        {
            space++;
            word++;
        }
        else
        {
            special++;
        }
    }
    printf("upper case letters in string: %d\n",upper);
    printf("lower case letters in string: %d\n",lower);
    printf("number in string: %d\n",number);
    printf("space in string: %d\n",space);
    printf("special characters in string: %d\n",special);
    printf("alphabet in string: %d\n",alphabet);
    printf("word in string: %d\n",word);
    return 0;
}