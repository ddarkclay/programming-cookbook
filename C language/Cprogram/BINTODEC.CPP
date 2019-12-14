/* program to print binary to dec*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5];
/*={1,1,1,0,0};*/
int j,n,s=0;
n=1;
for(j=0;j<=4;j++)
scanf("%d",&a[j]);
for(j=4;j>=0;j--)
{
s=s+(a[j]*n);
n+=n;
}
printf("%d",s);
getch();
}