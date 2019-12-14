#include<stdio.h>
#include<conio.h>
void main()
{
char ch = 'p';
int r,c,sp;
int spcnt=5;
clrscr();
for(r=1;r<=6;r++)
{
   for(sp=1;sp<=spcnt;sp++)
       printf(" ");
       for(c=1;c<=1;c++)
       {
	 printf("%c",ch);
       }
      printf("\n");
     spcnt--;
}
getch();
}


