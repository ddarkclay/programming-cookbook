#include<stdio.h>
#include<conio.h>
void main()
{
int row,col,no;
clrscr();
printf("\n\n\n");
for(row=1;row<=5;row++)
{
if(row%2==0)
no=0;
else
no=1;
printf("\t");
    for(col=1;col<=row;col++)
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
