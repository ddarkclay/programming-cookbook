/* program to print max no*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,max=0;
int no[10];
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&no[i]);
}
max = no[0];
for(i=1;i<10;i++)
{
if (no[i] > max)
max=no[i];
}
printf("Greatest no is %d",max);
getch();
}

