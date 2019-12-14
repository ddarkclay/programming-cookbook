#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,no;
clrscr();
for(r=1;r<=5;r++)
{
if(r%2==0)
no=0;
else
no=1;
for(c=1;c<=r;c++)
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