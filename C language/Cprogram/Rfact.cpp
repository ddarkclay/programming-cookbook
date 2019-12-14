/* program to print factorial using Recursive function */
#include<stdio.h>
#include<conio.h>
int r_facto (int num)
{
if(num==1)
   return(1);
return(num*r_facto(num-1));
}
void main()
{

int num=0,res=0;
clrscr();
printf("Enter any no->");
scanf("%d",&num);
res=r_facto(num);
printf("%d",res);
getch();
}
