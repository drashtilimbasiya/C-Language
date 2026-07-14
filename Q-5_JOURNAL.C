#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
	int eno;
	char name[50];
	int salary;
}
e[5];
void main()
{
	int i,a;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n enter employee eno:");
		scanf("%d",&e[i].eno);
		printf("\n enter employee name:");
		scanf("%s",&e[i].name);
		printf("\n enter employee salary:");
		scanf("%d",&e[i].salary);
	}
	a=e[0].salary;
	for(i=0;i<5;i++)
	{
		if(e[i].salary>a)
		{
			a=e[i].salary;
		}
	}
	for(i=0;i<5;i++)
	{
		if(e[i].salary==a)
		{
			printf("\n this employee have maximum salary:");
			printf("\n employee no:%d",e[i].eno);
			printf("\n employee name :%s",e[i].name);
			printf("\n employee salary:%d",e[i].salary);
		}
	}
	getch();
}