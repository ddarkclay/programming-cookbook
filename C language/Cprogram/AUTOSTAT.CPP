#include<stdio.h>
#include<conio.h>
void autostat(int);
void main()
{
int i;
clrscr();
for (i=0;i<5;i++)
{
autostat(i);
}
}
void autostat(int i)
{
auto auto_var = 1;
static stat_var = 1;
printf("\nauto var=%d",auto_var);
printf("\nstat var =%d",stat_var);
auto_var++;
stat_var++;
}
