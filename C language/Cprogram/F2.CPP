/* program to accept the return value */
#include<stdio.h>
#include<conio.h>
int  sum();   /* declaration of fn*/
void main()
{
int tot;
clrscr();
tot=sum();
printf("total->%d",tot);
getch();
}
int sum()   /* defination of function*/
{
return(105+50);
}