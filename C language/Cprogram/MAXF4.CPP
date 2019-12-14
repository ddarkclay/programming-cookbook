/* program to pass the argument */
#include<stdio.h>
#include<conio.h>
int  sum(int,int);   /* declaration of fn*/
void main()
{
int a,b,tot;
clrscr();
tot=sum(10,5);
printf("\n %d ",tot);
tot=sum(100,200);
printf("\n %d",tot);
getch();
}
int sum(int a,int b)   /* defination of function*/
{
int c;
c=a+b;
return(c);
}