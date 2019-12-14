#include<stdio.h>
#include<conio.h>
void darray(int a[], int b)   /* Actual defination */
{
int i;
for(i=0;i<b;i++)
a[i]=a[i]*2;
for(i=0;i<b;i++)
printf("\n%d",a[i]);
getch();
}
void main()
{
clrscr();
int n[10],m,i;
printf("Enter number elements");
scanf("%d",&m);
printf("Enter %d elements in an array\n",m);
for(i=0;i<m;i++)
scanf("%d",&n[i]);
darray(n,m);
}
