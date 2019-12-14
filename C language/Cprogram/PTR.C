#include<stdio.h>
#include<conio.h>
void main()
{
char ar[10] = {"computer"};
char *p;
p = ar;
clrscr();
for(;*p != '\0';*p++)
{
printf("\n%c %u",*p,p);
}
getch();
}
