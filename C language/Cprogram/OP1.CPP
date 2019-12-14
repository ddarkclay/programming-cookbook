#include<stdio.h>
#include<conio.h>
f(int x,int *y)
{
x= *(y)+=2;
return(0);
}
void main()
{
int a[5] = {2,4,6,8,10};
int i,b=5;
clrscr();
for(i=0;i<5;i++)
{
f(a[i],&b);
printf("\n%d %d",a[i],b);
}
}
