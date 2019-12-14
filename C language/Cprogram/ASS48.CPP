#include<stdio.h>
#include<conio.h>
void main()
{
int a,temp,rem=0,div = 0;
int prod = 0 ,cnt = 0;
clrscr();
printf("Enter any number=");
scanf("%d",&a);
temp=a;
while(a>0)
{
  rem=a % 10;
  div=a/10;
  prod=rem*div;
  printf("%d ",prod);
  if(prod>=10)
  {
   a = prod;
   cnt++;
   }
  else
  {
  if (prod<10)
      cnt++;
      break;
   }
 }
 printf("\nThe persistence of no %d is %d\n",temp,cnt);
 getch();
 }



