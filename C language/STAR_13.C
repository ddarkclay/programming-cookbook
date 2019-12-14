#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,sp,spcnt,ln;
clrscr();
printf("Enter lines:");
scanf("%d",&ln);
spcnt=ln-1;
for(r=1;r<=ln;r++)
{
for(sp=1;sp<=spcnt;sp++)
{
printf(" ");
}
for(c=1;c<=r;c++)
printf("* ");
printf("\n");
spcnt--;
}
getch();
}