#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
scanf("%d",&yr);
/*//if((yr%400==0 || yr%4==0)&& (yr%100!=0))
if(yr%100==0 && yr%400 == 0 || yr%4==0)
printf("leap year");
else
printf("not a leap year");*/
if(yr%100==0)
{
  if(yr%400==0)
     printf("leap year");
  else
     printf("not a leap year");
}
else
{
  if (yr%4==0)
     printf("leap year");
  else
     printf("not a leap year");
}
getch();
}


