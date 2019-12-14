#include<stdio.h>
#include<conio.h>
void main()
{
int temp,no;
clrscr();
scanf("%d",&no);
while(no != 0)
{
temp=no%10;
printf("%d",temp);
no=no/10;
}
getch();
}
