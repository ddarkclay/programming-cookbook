/* program to print table of given no)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
int no;
clrscr();
printf("Enter any no");
scanf("%d",&no);
for(r=1;r<=10;r++)
{
printf("\n%d * %d = %d",no,r,no*r);
}
getch();
}
