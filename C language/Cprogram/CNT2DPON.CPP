#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a[3][3]={{1,-6,3},{2,0,-4},{-3,4,1}};
int i,j,poscnt=0,negcnt=0;
clrscr();
for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   {
     if(a[i][j] < 0)
       negcnt++;
     else
       poscnt++;
   }
     printf("\npositive count = %d negative count = %d",poscnt,negcnt);
getch();
}
