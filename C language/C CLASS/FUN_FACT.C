#include<stdio.h>
#include<conio.h>
int f_facto(int);
void main()
{
 int n,f1;
 clrscr();
 printf("Enter a number :");
 scanf("%d",&n);
 f1=f_facto(n);
 printf("Factorial is :");
 printf("%d",f1);
 getch();
}
int x,i,fact=1;
int f_facto(int x)
{
 for(i=1;i<=x;i++)
  { fact=fact*i;}
 return(fact);
}
