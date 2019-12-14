#include<stdio.h>
#include<conio.h>
#define SIZE 50
int chkvowel(char ch);
void main()
{
char s[SIZE];
char ch;
int l,cnt=0;
clrscr();
printf("enter the sentence");
gets(s);
for(l=0;s[l]!='\0';l++)
{
if((chkvowel(s[l])==1) && (chkvowel(s[l+1]))==1)
{
cnt++;
//l++;
}
}
printf("consicutive vowels - %d",cnt);
getch();
}
int chkvowel(char ch)
{
int i;
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
i=1;
break;
default:
i=0;
}
return(i);
}
