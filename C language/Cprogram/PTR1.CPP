/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i=3;
int *j;
clrscr();
j=&i;

printf("i->%d &i>-%u j->%u *j->%d ",i,&i,j,*j);
*j=13;
printf("\ni=%d",i);
getch();
}


