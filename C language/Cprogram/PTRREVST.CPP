/* program to reverse string recursive function */
#include<stdio.h>
#include<conio.h>
void rev_str(char *p)
{
if(*p=='\0')
   return;
  else
rev_str(p+1);
printf("%c",*p);
}
void main()
{
char st[10];
clrscr();
printf("Enter string->");
gets(st);
rev_str(st);
getch();
}
