#include<stdio.h>
#include<conio.h>
void main()
{
int n=3;
int f1=1,f2=1,f3;
clrscr();
printf("%d %d",f1,f2);
while(n<=10)
{
f3=f1+f2;
printf(" %d",f3);
f1=f2;
f2=f3;
n=n+1;
}
getch();
}


