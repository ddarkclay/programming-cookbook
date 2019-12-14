/* Program to count the number of occurances of any two vowel in a line text*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char sstr[80]="   my   name   is   svn";
 char dstr[20];
 char ch;
 int aftersp;
 int nb,nc;
 clrscr();
 printf("Enter a string:");
 //gets(str);
 for(nb=0;sstr[nb]== ' ';nb++)
 {
   for(nc = 0;(ch=sstr[nb]) != '\0';nb++)
   {
      if(ch != ' ')
      {
      dstr[nc++] = ch;
      aftersp = 0;
      }
      else if(aftersp == 0)
	{
	dstr[nc++]=ch;
	aftersp = 1;
	}
     }
}
dstr[nc] = '\0';
 printf("%s",dstr);
getch();
}
