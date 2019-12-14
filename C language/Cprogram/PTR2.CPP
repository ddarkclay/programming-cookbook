/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n[5]={10,22,304,48,51};
int *start=n;
/*int *end=n+5;*/
int i;
clrscr();
/*for(start=n;start<end;start++)
{
printf("\n%d  %u",*start+1,&start+i1);
} */

for(i=0;i<5;i++)
printf("\n%d %u",*(start+i),&start+i);
getch();
}


