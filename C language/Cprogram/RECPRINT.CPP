#include<stdio.h>
#include<conio.h>
void rrev(int a[])
{
static cnt = 0;
if(cnt >=5)
return;
cnt++;
rrev(a);
printf("%d ",a[--cnt]);
}
void main()
{
int n;
int a[5]={1,2,3,4,5};
clrscr();
rrev(a);
}


