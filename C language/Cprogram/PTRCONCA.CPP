/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20]={"SYSTEM"};
char b[20]={"ANALYASIS"};
clrscr();
char *s=a;
char *t=b;
s+=(strlen(s)-1);
while(*t!='\0')
{
*s=*t;
s++;
t++;
}
*s='\0';
puts(a);
getch();
}


