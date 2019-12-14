/* program to print elements of variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
int v1=5;
int v2=15;
clrscr();
int *ptr1;
int *ptr2;
ptr1=&v1;
ptr2=&v2;
printf("v1=%d,v2=%d",v1,v2);
printf("\nptr1=%d,ptr2=%d",*ptr1,*ptr2);
getch();
}


