#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i;
char a[5];
int len=0;
clrscr();
printf("Enter any string =");
scanf("%s",&a);
len = strlen(a);
for(i=len-1;i>=0;i--)
{
  printf("%c ",a[i]);
 }
 getch();
 }
