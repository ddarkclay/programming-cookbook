#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,sp,spcnt=5;
char ch='+';
clrscr();
for(r=1;r<=5;r++)
 {
  if(r%2==0)
    ch='*';
  else
    ch='+';
  for(sp=spcnt;sp>1;sp--)
     printf(" ");
  for(c=0;c<r;c++)
  {
      printf("%c ",ch);
   {
   if(ch=='+')
      ch='*';
   else
      ch='+';
     /*printf("%c",ch);*/
   }
   }
    printf("\n");
    spcnt--;
  }
   getch();
 }
