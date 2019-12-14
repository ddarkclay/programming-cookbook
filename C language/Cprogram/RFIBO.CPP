/* program to print reverse string using rec function */
#include<stdio.h>
#include<conio.h>
void r_reverse(char st[])
{
static int i;
if(st[i]=='\0')
   return;
i++;
r_reverse(st);
printf("%c",st[--i]);
}
void main()
{
char st[10];
clrscr();
printf("Enter any string->");
gets(st);
r_reverse(st);
getch();
}
