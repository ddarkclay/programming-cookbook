#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,sp,p;
int c1=4;
int spcnt=0;
clrscr();
for(r=1;r<=4;r++)
{
   for(sp=0;sp<=spcnt;sp++)
       printf(" ");
       for(c=1;c<=c1;c++)
       {
	 printf("%d ",c);
       }
       for(p=(c-2);p>=1;p--)
       printf("%d ",p);
      printf("\n");
     spcnt++;
     c1--;
}
getch();
}


