#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,ln;
clrscr();
for(r=0;r<=9;r++)
{
for(c=1;c<=100;c+=10)
{
printf("%3d ",r+c);
}
printf("\n");
}
getch();
}