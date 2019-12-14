#include<stdio.h>
#include<conio.h>
void main()
{
int i=3;
int *j;
clrscr();
j=&i;
printf("%d %u %u %d",i,&i,j,*j);
getch();
}


