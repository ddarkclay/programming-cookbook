#include <stdio.h>
#include <conio.h>
int calculateLeap(int);
void main()
{
int year, is_leap, i,day_of_week;
int start_year = 1900;
long int No_of_days = 0;
printf("\nEnter the Year: ");
scanf("%d",&year);
for(i = start_year; i<year;i++)
{
    is_leap = calculateLeap(i);
    if (is_leap)
       No_of_days = No_of_days +366;
    else
       No_of_days = No_of_days +365 ;
}

day_of_week = int(No_of_days % 7);
if(day_of_week == 0)
     printf("\nMonday");
if(day_of_week == 1)
     printf("\nTuesday");
if(day_of_week == 2)
     printf("\nWednesday");
if(day_of_week == 3)
     printf("\nThursday");
if(day_of_week == 4)
     printf("\nFriday");
if(day_of_week == 5)
     printf("\nSaturday");
if(day_of_week == 6)
     printf("\nSunday");
getch();
}
int calculateLeap(int year)
{
if((year%400 == 0) || ((year % 4 == 0) && (year %100 != 0)))
  return 1;
else
 return 0;
}
