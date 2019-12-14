#include<stdio.h>
#include<conio.h>
void r_binary(int num)
{
if(num<=0)
   return;
r_binary(num/2);
printf("%d",num%2);
//r_binary(num/2);
}
void main()
{

int num=0;
clrscr();
printf("Enter any no-");
scanf("%d",&num);
r_binary(num);
}
