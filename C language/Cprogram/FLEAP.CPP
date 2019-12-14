/* write a function to accept the year and return it if it is leap year */
#include<stdio.h>
#include<conio.h>
int isleap(int y);
void main()
{
int yr;
clrscr();
printf("Enter a year-");
scanf("%d",&yr);
int i=isleap(yr);
if(i!=0)
printf("%d is a leap year",yr);
else
printf("%d is not a leap year",yr);
getch();
}
int isleap(int y)
{
if((y%4==0 && y%100!=0)||(y%400==0))
return(y);
else
return(0);
}
