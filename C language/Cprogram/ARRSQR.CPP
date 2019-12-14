#include<stdio.h>
#include<conio.h>
void main()
{
int no[5];
int i;
clrscr();
for(i=0;i<5;i++)
{
no[i] = i+1;
}
printf("printing an array");
for(i=0;i<5;i++)
{
no[i] = no[i]*no[i];
printf("\n%d",no[i]);
}
getch();
}
