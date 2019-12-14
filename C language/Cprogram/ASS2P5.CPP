#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c,p;
int ch = 65;
clrscr();
for(r=4;r>=0;r--)
{
ch = 65;
for(c=0;c<=r;c++)
{
printf("%c ",ch++);
}
ch-=2;
for(p=c;p>1;p--)
printf("%c ",ch--);
printf("\n");
}
getch();
}
