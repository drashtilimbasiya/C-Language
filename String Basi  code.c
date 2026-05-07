#include<stdio.h>
int main()
{
    //find how many characters in string . Means count the length of string and print it
    // char str[100];
    // int count=0,i;
    // printf("enter string: ");
    // scanf("%s",&str);
    // printf("string is: %s\n",str);
    // for(i=0;str[i]!='\0';i++)
    // {
    //     count++;
    // }
    // printf("length of string: %d\n",count);

    //print enter string and find their ascii value and print it
    char str[100];
    int i;
    printf("enter string: ");
    scanf("%s",&str);
    printf("string is: %s\n",str);
    printf("ascii value of string is: ");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%d ",str[i]);
    }
    printf("\n");
    return 0;
}