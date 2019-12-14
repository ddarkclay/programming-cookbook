#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,ch=65;
clrscr();
for(r=1;r<=5;r++)
{
ch=65;
for(c=1;c<=r;c++)
{
printf("%c ",ch++);
}
printf("\n");
}
getch();
}