/* write a function to concatenate a string to the right of a given string*/
#include<stdio.h>
#include<conio.h>
void concat(char [],char []);
void main()
{
char s[20],t[20];
clrscr();
printf("Enter a string");
gets(s);
printf("Enter a string");
gets(t);
concat(s,t);
getch();
}
void concat(char s1[],char s2[])
{
int i,j;
for(i=0;s2[i]!='\0';i++);
for(j=0;s1[j]!='\0';j++,i++)
{
s2[i]=s1[j];
}
s2[i]='\0';
puts(s2);
}