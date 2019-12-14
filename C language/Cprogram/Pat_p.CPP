#include<stdio.h>
#include<conio.h>
void main()
{
int row,col,pnt;
clrscr();
for(row=1;row<=5;row++)
{
	for(col=1;col<=6-row;col++)
	{
	   printf("%c",col+64);
	}
	col=col-2;
	for(pnt=col;pnt>=1;pnt--)
	{
	   printf("%c",pnt+64);
	}
	printf("\n");
	}
	getch();
	}


