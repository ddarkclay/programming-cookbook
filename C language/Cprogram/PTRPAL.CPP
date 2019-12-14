/* program to print palindrome or not using pointer function */
#include<stdio.h>
#include<conio.h>
int ispal(char *p)
{
char *t;
t=p;
for(;*p!='\0';*p++);
*p--;
while(t<p)
{
if(*t != *p)
   return 0;
   t++;
   p--;
}
return 1;
}
void main()
{
char st[10];
int i;
clrscr();
printf("Enter a  string->");
gets(st);
i=ispal(st);
if (i==0)
   printf("Not palidrome");
else
   printf("palindrome");
getch();
}
