#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{
char a[20]={"abc12---VIV"};
int i;
int p;
clrscr();
printf("\n%s",a);
for(i=0;a[i]!='\0';i++)
{
int p = a[i];
if(p >= 48 && p <= 57)
    a[i]=57;
else if(a[i]>=65 && a[i]<=90)
     a[i]+=32;
else if(a[i]>= 97 && a[i]<= 122)
     a[i]-=32;
else
    a[i]='*';
}
printf("\n");
puts(a);
getch();
}
