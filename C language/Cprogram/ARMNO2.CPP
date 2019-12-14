#include<stdio.h>
#include<conio.h>
void main()
{
int no,no1,temp,arm=0;
clrscr();
for(no=1;no<=500;no++)
{
   no1 = no;
   while(no1!=0)
   {
   temp = no%10;
   arm = arm+(temp*temp*temp);
   no=no/10;
   }
   if(no1 == arm)
   {
   printf("%d",arm);
   }
}
getch();
}
