#include<stdio.h>
#include<conio.h>
void fn_mul(int a,int b)   /* Actual defination */
{
int prod;
prod = a*b;
printf("%d*%d=%d",a,b,prod);
getch();
}
void main()
{
clrscr();
int n,m;
scanf("%d %d",&n,&m);
fn_mul(n,m);
getch();
}
