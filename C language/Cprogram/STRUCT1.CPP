/* Structures*/
#include<stdio.h>
#include<conio.h>
struct personal
{
  char name[20]; int days; char month[10]; int year; float salary;
};
void main()
{
struct personal p1,p2;
/*p2=p1;*/
clrscr();
printf(" Enter the values for name,days,month,year,salary respectively\n");
scanf("%s %d %s %d %f",p1.name,&p1.days,p1.month,&p1.year,&p1.salary);
printf("\nprinting values\n");
printf("%s %d %s %d %f",p1.name,p1.days,p1.month,p1.year,p1.salary);
printf("%s %d %s %d %f",p2.name,p2.days,p2.month,p2.year,p2.salary);

getch();
}


