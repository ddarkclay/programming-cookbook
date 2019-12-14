/* program to accept the paramenters and return  */
#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
void main()
{
clrscr();
int tot=sum(10,5);
printf("  %d",tot);
getch();
}
int sum(int a,int b)   /* defination of function*/
{
int c=0;
c=a+b;
return(c);
}

