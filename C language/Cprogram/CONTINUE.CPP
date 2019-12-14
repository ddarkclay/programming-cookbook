#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
clrscr();
for(i=1;i<=100;i++)
{
if(i%7==0)
  continue;
printf("%d ",i );
}
getch();
}


