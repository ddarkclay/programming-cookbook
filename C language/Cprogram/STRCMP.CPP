#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int flag=0;
char a[5];
char b[5];
clrscr();
scanf("%s",a);
scanf("%s",b);
flag  = strcmp(a,b);
printf("flag=%d",flag);
if (flag==0)
printf("\nboth are equal");
else if (flag>0)
  printf("\nstring a is greater");
else
  printf("\nsrting b is greater");
getch();
}


