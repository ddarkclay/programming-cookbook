#include<stdio.h>
#include<conio.h>
void main()
{
int no ,i;
int facto=1;
clrscr();
printf("Enter any no");
scanf("%d",&no);
for(i = no;i>=1;i--)
facto = facto*i;
printf("factorial = %d",facto);
}