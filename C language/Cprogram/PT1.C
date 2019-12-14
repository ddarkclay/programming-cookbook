#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20;
int *ptr1 = &a;
int *ptr2 = &b;
clrscr();
printf("\nthe value of pointer is %d",*ptr1);
*ptr1=*ptr1+10;
printf("\nthe new value of pointer is %d",*ptr1);
printf("\nthe value of pointer is %d",*ptr2);
*ptr2=*ptr2-40;
printf("\nthe new value of pointer is %d",*ptr2);
*ptr2=*ptr2-*ptr1;
printf("\nThe new value of ptr2 is %d",*ptr2);
getch();
}
