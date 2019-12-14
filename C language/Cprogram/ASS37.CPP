#include<stdio.h>
#include<conio.h>
void main ()
{
int r,spcnt,i;
char ch,chend;
clrscr();
ch='A';
chend='G';
for(r=0;r<7;r++)
{
for(ch='A';ch<=chend;ch++)
printf("%c",ch);
spcnt=2*r-1;
for(i=1;i<=spcnt;i++)
printf(" ");
if(r==0)
ch--;
for(ch--;ch>='A';ch--)
printf("%c",ch);
chend--;
printf("\n");
}
getch();
}
