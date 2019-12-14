/* passing array to a function */
#include<stdio.h>
#include<conio.h>
void arr(int a[])
{
int i;
for(i=0;i<5;i++)
   printf("\n%d   %d",a[i],a[i] * a[i]);
}

void main()
{
int i;
int n[5]={2,3,4,5,6};
clrscr();
arr(n);
getch();
}



