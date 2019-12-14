#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char *p;
clrscr();
p=((char*)malloc(10));
if(p==NULL)
{
puts("Not enoguht memory");
exit(0);
}
printf("enter the string");
gets(p);
puts(p);
p=((char *) realloc(p,30));
puts(p);
getch();
}
