/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n[10]={10,22,304,48,51,12,14,99,12,109};
int *start;
int *end=n+10;
int i;
clrscr();
for(i=0;i<10;i++)
printf("%d ",n[i]);
printf("\n");
for(start=n;start<end;start+=2)
{
printf("%d  " ,*start);
}
getch();
}


