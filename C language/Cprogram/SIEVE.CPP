/* program - sieve*/
#include<stdio.h>
#include<conio.h>
void main()
{
int num[100];
int i,j;
clrscr();
for(i=0;i<100;i++)
num[i]=i+1;
for(i=1;i<99;i++)
  if(num[i] != 0)
    for(j=i+1;j<100;j++)
    if(num[j] % num[i] ==0)
       num[j] = 0;

for(i=0;i<100;i++)
if(num[i]!=0)
printf("%d ",num[i]);
getch();
}

