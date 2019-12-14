/* program to pass the argument */
#include<stdio.h>
#include<conio.h>
int  sum(int,int);   /* declaration of fn*/
void main()
{
int a,b,t;
clrscr();
a=10;
b=5;
t=sum(a,b);
printf("\nt->%d",t);
printf("\nmain %d %d",a,b);
getch();
}
int sum(int a,int b)   /* defination of function*/
{
a=25,b=20;
printf("\nsum %d %d %d",a,b,a+b);
return(a+b);
}