#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,no;
 clrscr();
 for(i=1;i<=5;i++)
  {
   if(i%2==0)
    no=0;
    else
    no=1;
   for(j=1;j<=i;j++)
     {
     printf("%d",no);
     if(no==0)
     no=1;
     else
     no=0;
   }
  printf("\n");
 }
  getch();
}