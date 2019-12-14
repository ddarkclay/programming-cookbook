#include<stdio.h>
#include<conio.h>
void main()
{
int row,col,pnt,cnt=1;
clrscr();
for(row=65;row<=70;row++)
{
	for(col=65;col<=70-cnt;col++)
	{
	   printf("%c",col);
	}
	col=col-2;
	for(pnt=col;pnt>=65;pnt--)
	{
	   printf("%c",pnt);
	}
	printf("\n");
	cnt++;
	}
	getch();
	}


