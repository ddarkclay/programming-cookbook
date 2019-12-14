/* program to swap to values*/
#include<stdio.h>
#include<conio.h>
void fswap(int* ,int*);
void main()
{
int i=5,j=-10;
clrscr();
printf("\noriginal values i->%d  j->%d ",i,j);
fswap(&i,&j);
printf("\nchanged values i->%d  j->%d ",i,j);
getch();
}
void fswap(int *p1,int *p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
}



