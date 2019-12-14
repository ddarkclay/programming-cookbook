/*program to print gcd of nos*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n1=0,n2=0;
clrscr();
scanf("%d %d",&n1,&n2);
while(n1 != 0 && n2 != 0)
{
   if(n1>n2)
     n1=n1 % n2;
   else
     n2=n2 % n1;
}
   if (n1==0)
       printf("%d",n2);
    else
       printf("%d",n1);
 getch();
}


