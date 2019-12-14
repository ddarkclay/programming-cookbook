/* program - temp1.cpp*/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
int sp,spcnt=4;
int ch=65;
for(r=1;r<=4;r++)
{

  for(sp=1;sp<=spcnt;sp++)
  printf(" ");
  for(c=1;c<=r;c++)
  {
  printf("%c ",ch);
  }
  spcnt--;
  ch++;
  printf("\n");
}
getch();
}
