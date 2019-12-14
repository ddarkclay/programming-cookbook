/* program to print upper or lower using pointer function */
#include<stdio.h>
#include<conio.h>
void main()
{
char st[10];
int i;
char *p;
p=st;
char ch;
clrscr();
printf("Enter string->");
gets(st);
printf ("Enter choice->");
scanf("%c",&ch);
switch(ch)
{
case 'u':
case 'U':
	for( ;*p !='\0'; *p++)
	 *p=*p-32;
	 break;
case 'l':
case 'L':
	 for(; *p!= '\0';*p++)
	 *p=*p+32;
	 break;
}
puts(st);
getch();
}
