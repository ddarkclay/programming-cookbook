#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int a[3][2]={{2,3},{1,2},{4,2}};
int b[2][3]={{1,2,4},{2,2,2}};
int c[3][3];
int i,j,k,no=0;
clrscr();
printf("Multiplication\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
     no=0;
      for(k=0;k<2;k++)
	no += a[i][k]*b[k][j];
	c[i][j] = no;
    }
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
   printf("\t%d",c[i][j]);
   printf("\n");
}
getch();
}
