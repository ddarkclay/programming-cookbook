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
    printf("%d",col);
    }

    printf("\n");
 }
getch();
}
