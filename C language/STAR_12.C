#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,ch=97;
clrscr();
for(r=5;r>=1;r--)
{
ch=97;
for(c=1;c<=r;c++)
{
printf("%c",ch++);
}
printf("\n");
}
getch();
}