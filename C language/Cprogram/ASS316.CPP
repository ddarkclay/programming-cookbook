#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l;
clrscr();
for(l=1;l<=10;l++)
{
   for(k=1;k<l;k++)
   {
     for(j=1;j<k;j++)
     {
       for(i=1;i<j;i++)
       {
	 if((i+j+k)==l)
	 { printf("%d+%d+%d=%d   \n ",i,j,k,l); }
       }
     }
   }
 }
getch();
}

