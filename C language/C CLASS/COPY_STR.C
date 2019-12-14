#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0;
 clrscr();
 char str1[15];
 char str2[15];
 printf("Enter a string :");
 gets(str1);
 while(str1[i]!='\0')
   {
     str2[i]=str1[i];
     i++;
   }
  str2[i]='\0';
  printf("Copied string is :%s",str2);
 getch();
}