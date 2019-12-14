/* Program to count the number of occurances of any two vowel in a line text*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[80];
 int i,j,cnt=0;
 clrscr();
 printf("Enter a string:");
 gets(str);
 for(i=0,j=i+1;str[i]!='\0';i++,j++)
  if((str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u') &&( str[j]=='A' || str[j]=='a' || str[j]=='E' || str[j]=='e' || str[j]=='I' || str[j]=='i' || str[j]=='O' || str[j]=='o' || str[j]=='U' || str[j]=='u'))
   cnt++;
 printf("Cosucative vowels occured %d times in line text",cnt);
 getch();
}