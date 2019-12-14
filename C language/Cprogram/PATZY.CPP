#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,k,p;
int ch=122;
int spcnt=4;
clrscr();
for(i=0;i<5;i++)  /* row*/
 {
  for(j=0;j<spcnt;j++)
   printf(" ");
  for(;k>=0;k++)
  {
   printf("%c",ch);
   ch--;
  }
  for(;p<i*2-1;p++)
  {
  ch++;
  printf("%c",ch);
  }
  spcnt--;
  printf("\n");
 }
getch();
}
