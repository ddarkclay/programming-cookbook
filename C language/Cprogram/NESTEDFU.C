#include<stdio.h>
#include<conio.h>
#include<string.h>
void fadd(int,int,int);
void favg(int);
void main()
{
int s,i=2,j=3,k=4;
clrscr();
fadd(i,j,k);
getch();
}
void fadd(int a,int b, int c)
{
int sum = a+b+c;
printf("total = %d",sum);
favg(sum);
getch();
}

void favg(int s)
{
float av = s/3;
printf("\naverage = %.2f",av);
}



