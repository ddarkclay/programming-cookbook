#include<stdio.h>
#include<conio.h>
void main()
{
int max,a,b,c,d,e;
clrscr();
printf("enter a no");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>b)
max=a;
else
max=b;
if(c>max)
max=c;
if(d>max)
max=d;
if(e>max)
max=e;
printf("%d=max",max);
getch();
}
