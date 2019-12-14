#include<stdio.h>
#include<conio.h>
void main()
{int r,c,p,j,no=1;
clrscr();
for(r=1;r<=4;r++)
{
no=r;
  for(p=1;p<=4-r;p++)
    printf(" ");
   for(c=1;c<=r;c++)
   printf("%d",no--);
   for(j=1,no=1;j<=r;j++)
   { printf("%d",no++);}
    printf("\n");
}
getch();
}