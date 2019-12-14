#include<stdio.h>
#include<conio.h>
#include<string.h>

void repl_chr(char s1[], char f,char r)
{
char ch1=f;
char ch2=r;
int i=0;
for(i=0;i<=strlen(s1);i++)
   {
   if(s1[i]== ch1)
   s1[i] = ch2;
   }
puts(s1);
getch();
}
void main()
{
char f,p;
char s1[20];
printf("REPLACE FUNCTION");
printf("\n Enter a str=>");
gets(s1);
printf("\n Enter A find char=>");
scanf("%c %c",&f,&p);
//printf("\n Enter a replace char=>");
//scanf("%c",&p);
repl_chr(s1,f,p);
getch();
clrscr();
}
