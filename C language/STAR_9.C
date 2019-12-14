#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,no=1;
clrscr();
for(r=1;r<=4;r++)
{
for(c=1;c<=r;c++)
{
printf("%d",no);
no++;
}
printf("\n");
}
getch();
}