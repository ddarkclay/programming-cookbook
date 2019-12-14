#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,ln;

clrscr();
for(r=1;r<=10;r++)
{
for(c=r;c<=100;c+=10)
{
printf("%3d ",c);
}
printf("\n");
}
getch();
}