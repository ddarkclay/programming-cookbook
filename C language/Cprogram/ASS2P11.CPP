#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,ch = 64;
int sp,spcnt = 4;
clrscr();
for(r=1;r<=5;r++)     /* row loop */
{
   ch++;
   for(sp =1 ;sp<=spcnt;sp++)
      printf(" ");
   for(c=1;c<=r;c++)
      printf("%c",ch);
   printf("\n");
    spcnt--;
}
getch();
}
