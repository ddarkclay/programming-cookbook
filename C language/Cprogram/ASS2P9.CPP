#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c;
int spcnt=4,sp;
clrscr();
for(r=1;r<=5;r++)
{
  for(sp=1;sp<=spcnt;sp++)
     printf(" ");
   for(c=1;c<=r;c++)

    printf("%d ",r);
   printf("\n");
 spcnt--;
}
getch();
}
