#include<stdio.h>
#include<conio.h>
int fn_mul(int,int);   /* Actual defination */
void main()
{
clrscr();
int n,m;
int prod;
scanf("%d %d",&n,&m);
prod = fn_mul(n,m);
printf("%d",prod);
getch();
}
int fn_mul(int a,int b)
{
int p;
p = a*b;
return(p);
}

