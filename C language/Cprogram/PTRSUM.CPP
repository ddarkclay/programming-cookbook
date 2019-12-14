/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n[5]={10,2,4,8,5};
int sum=0;
int *start;
int *end=n+5;
clrscr();
for(start=n;start<end;start++)
{
sum=sum+=*start;
}
printf("\n Total= %d",sum);
getch();
}


