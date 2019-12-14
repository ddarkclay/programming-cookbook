#include<stdio.h>
#include<conio.h>
void main()
{
char ch='z';
char ch1='z';
int i,j,k,sp,spcnt=6;
clrscr();
for(i=1;i<=4;i++)
{
  ch=ch1;
  for(sp=1;sp<=spcnt;sp++)
     printf(" %c", ' ');
  for(j=1;j<i;j++)
     printf("%c ",ch++);
  for(k=j;k>=1;k--)
     printf("%c ",ch--);
printf("\n");
spcnt--;
ch1--;
}
getch();
}
