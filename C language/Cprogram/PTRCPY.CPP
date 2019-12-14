/* program to copy the string */
#include<stdio.h>
#include<conio.h>
void copystring(char * ,char *);
void main()
{
clrscr();
fflush(stdin);
char string1[]={"A string to be copied"};
char string2[20];
puts("String 1");
puts(string1);

copystring(string1,string2);
puts("String 2");
puts(string2);
getch();
}
void copystring(char *from,char *to)
{
for( ;*from !='\0';from++)
{
*to = *from;
to++;
}
*to='\0';
}



