#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
  clrscr();
  printf("\n enter the no of row=");
  scanf("%d",&r);
  printf("\n enter the no of column=");
  scanf("%d",&c);
  printf("\n enter the first matrix element=\n");
  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     {
	 scanf("%d",&a[i][j]);
     }
  }
  printf("\n enter second matrix element=\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  printf("\n multiply of the matrix:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       mul[i][i]=0;
       for(k=0;k<c;k++)
       {
	 mul[i][j]+=a[i][k]*b[k][j];
       }
    }
  }
  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     {
       printf("%d\t",mul[i][j]);
     }
     printf("\n");
  }
  getch();
}