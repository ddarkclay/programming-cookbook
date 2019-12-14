#include<stdio.h>
#include<conio.h>
void main()
{
int row,col;
clrscr();
for(row=1;row<=10;row++)
{
   for(col=2;col<=9;col++)
   {
      printf("%2d*%2d=%2d ",col,row,col*row);
   }
   printf("\n");
}
getch();
}


