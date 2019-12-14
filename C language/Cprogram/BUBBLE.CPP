#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={17,25,9,4,6,60,77,38,99,1};
int j,i,t;
j = 1;
clrscr();
while(j)
{
j=0;
for(i=0;i<10;i++)
{
   if(a[i]>a[i+1])
   {
   t=a[i];
   a[i]=a[i+1];
   a[i+1]=t;
   j=1;
   }
}
}
for(i = 0;i<10;i++)
printf("%d ",a[i]);
getch();
}
