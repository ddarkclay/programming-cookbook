/* program to print factorial of 1=10 Recursive function */
#include<stdio.h>
#include<conio.h>
long int R_factorial(int n)
{
long int res;
if(n==0)
   return(1);
  else
   res= (n*R_factorial(n-1));
   return(res);
}
void main()
{
int i=0;
clrscr();
for(i=1;i<11;i++)
{
printf("\n%2d !=%ld",i,R_factorial(i));
}
getch();
}
