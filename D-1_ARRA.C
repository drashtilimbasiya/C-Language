#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2];
  int i,j;
  clrscr();
  printf("enter the element of first matrix \n:");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
   }
  }
  printf("enter the element of 2nd matrix:\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("b[%d][%d]=",i,j);
    scanf("%d",&b[i][j]);
   }
  }

  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
   }
  }
  printf("sum of matrix:\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("%d\t",c[i][j]);
     if(j==1)
     printf("\n");
   }
  }
  getch();
}

