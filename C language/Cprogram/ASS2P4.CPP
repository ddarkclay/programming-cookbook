#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c,p;
clrscr();
for(r=5;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("%d ",c);
}
c-=2;
for(p=c;p>=1;p--)
printf("%d ",p);
printf("\n");
}
getch();
}
