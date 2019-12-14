#include<stdio.h>
#include<conio.h>
void main()
{
int no,i;
clrscr();
 printf("Enter any number:");
 scanf("%d",&no);
 for(i=1;i<=10;i++)
 {
 printf("\n%d X %2d =  %2d",no,i,no*i);
 }
 getch();
}
