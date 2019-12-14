/* program to change the case */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void putstr(char *ptr)
{
while(*ptr!='\0')
{
putchar(toupper(*ptr++));
}
return;
}
void main()
{
clrscr();
char string[]={" c is a high level language"};
putstr(string);
getch();
}



