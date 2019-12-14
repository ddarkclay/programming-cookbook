#include<stdio.h>
#include<conio.h>
void main()
{
int no=1,no1,rem,sum=0,addi;
clrscr();
for(no = 19;no<=1000;no++,sum=0)
{
    no1 = no;
    while(no1 != 0)
    {
   rem= no1%10;
   sum = sum + rem;
   no1 = no1/10;
    }
   if(sum>=9 && sum < 100)
   {
   addi = (sum/10)+(sum%10);
    }
    if(addi == 1)
       printf("%d  ",no);
       addi=0;
}
getch();
}