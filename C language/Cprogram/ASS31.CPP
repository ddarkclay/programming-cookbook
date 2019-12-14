#include<stdio.h>
#include<conio.h>
void main()
{
int i;
/* long int i1,i2; */
double i1,i2;
int cnt=0;
clrscr();
printf("NO    SQAURE   CUBE");
for(i=1;i<=100;i++)
{
  /*if(cnt<=20)*/{
   i1=(double)i*i;
   i2=(double)i*i*i;
   printf("\n%d    %9.0f    %12.0f",i,i1,i2);
   cnt=cnt+1;
   if(cnt==20)
   {
   getch();
   clrscr();
   cnt=1;
  }
}
}
getch();
}
