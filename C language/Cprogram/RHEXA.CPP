#include<stdio.h>
#include<conio.h>
void r_octal(int num)
{
if(num<=0)
   return;
r_octal(num/16);
printf("%d  ",num%16);
//r_octal(num/2);
}
void main()
{

int num=0;
clrscr();
printf("Enter any no-");
scanf("%d",&num);
r_octal(num);
getch();
}
