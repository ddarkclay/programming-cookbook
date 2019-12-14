#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int a[3][3]={{1,2,3},{2,0,4},{3,4,9}};
int b[3][3]={{2,3,4},{1,2,3},{4,3,2}};
int c[3][3];
int i,j,k,no=0;
clrscr();
printf("Matrix A\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
     {
     printf("%d ",a[i][j]);
     }
     printf("\n");
}
printf("Matrix B\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
     {
     printf("%d ",b[i][j]);
     }
     printf("\n");
}

printf("Multiplication\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
     no=0;
      for(k=0;k<3;k++)
	no += a[i][k]*b[k][j];
	c[i][j] = no;
    }
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
   printf("%d ",c[i][j]);
   printf("\n");
}
getch();
}
