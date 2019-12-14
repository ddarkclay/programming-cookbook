#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,no;
clrscr();
for(r=5;r>=1;r--)
{
no = 5;
for(c=1;c<=r;c++)
{
printf("%d",no);
no=no-1;
}
printf("\n");
}
getch();
}