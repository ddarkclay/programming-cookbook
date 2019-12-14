/* program to print product of int using recurration */
#include<stdio.h>
#include<conio.h>
int r_prod(int a)
{
if(a==0)
   return(1);
return(a%10*r_prod(a/10));
}
void main()
{
clrscr();
int a=0;
int res=0;
printf("Enter any 3 digit number->");
scanf("%d",&a);
res=r_prod(a);
printf("%d",res);
getch();
}
