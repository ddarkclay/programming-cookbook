#include<stdio.h>
#include<conio.h>
void main()
{
   struct add
   {
   char phone[10];
   char city[10];
   int pin;
   };
   struct emp
   {
   char name[10];
   int empno;
   struct add a;
   };
struct emp e1[3];
clrscr();
printf("\nEnter empname,empno,address(phone,city,pin)\n");
int i;
for(i=0;i<3;i++)
{
fflush(stdin);
scanf("%s %d %s %s %d",e1[i].name,&e1[i].empno,e1[i].a.phone,e1[i].a.city,&e1[i].a.pin);
}
for(i=0;i<3;i++)
{
printf("\n%s %d %s %s %d",e1[i].name,e1[i].empno,e1[i].a.phone,e1[i].a.city,e1[i].a.pin);
}
getch();
}
