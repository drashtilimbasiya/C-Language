#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int transpose[3][3];
   clrscr();
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
	  transpose[j][i]=matrix[i][j];
       }
   }
   printf("Transposed Matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
	  printf("%d\t",transpose[i][j]);
       }
       printf("\n");
   }
   getch();
}
