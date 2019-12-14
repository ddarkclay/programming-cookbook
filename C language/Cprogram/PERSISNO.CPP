#include<stdio.h>
#include<conio.h>
void main()
{
int no=1,no1,rem,sum=0,add;
clrscr();
for(no = 1;no<=1000;no++)
{
no1 = no;
while(no1 > 0)
{
rem= no1%10;
sum = sum + rem;
no1 = no1/10;
}
if(sum>=9 && sum <= 100)
{
add = (sum/10)+(sum%10);
}
if(add == 1)
printf("%d  ",no);
sum = 0;
}
getch();
}