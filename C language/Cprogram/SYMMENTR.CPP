#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a[3][3]={{1,2,3},{2,0,4},{3,4,1}};
int i,j;
clrscr();
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
     if(a[i][j] != a[j][i])
       {
	printf("\nmatrix is not symmentric");
	getch();
	exit(0);
	}
}
     printf("\nmatrix is symmentric");
getch();
}
