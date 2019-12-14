/* Program to count the number of occurances of any two vowel in a line text*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[10],temp;
 int i,j;
 clrscr();
 printf("Enter a string:");
 gets(str);
 int len = strlen(str) - 1;
 int mid = len/2;
 for(i = 0;i<=mid;i++)
 {
   temp = str[i];
   str[i]=str[len-i];
   str[len-i]=temp;
 }
 puts(str);
 getch();
}