#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c,spcnt=3,sp,p;
clrscr();
for(r=1;r<=4;r++)
{
for(sp=1;sp<=spcnt;sp++)
printf(" ");
for(c=1;c<=r;c++)
{
printf("%d",c);
}
spcnt--;
c-=2;
for(p=c;p>=1;p--)
printf("%d",p);
printf("\n");
}
getch();
}
