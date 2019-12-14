/* write a function to compare two strings */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void compare(char [],char []);
void main()
{
char s[20],t[20];
clrscr();
printf("Enter a string->");
gets(s);
printf("Enter a string->");
gets(t);
compare(s,t);
getch();
}
void compare(char s1[],char s2[])
{
int i,j;
int flag = 0;
int lens1 = strlen(s1);
int lens2 = strlen(s2);
for(i=0,j=0;i<= lens1 && j<=lens2;i++,j++)
{
    if(s2[j] != s1[i])
    {
    flag = 1;
    break;
    }
}
if(flag == 0)
 printf("Strings are equal");
else
 printf("Strings are not equal");
}