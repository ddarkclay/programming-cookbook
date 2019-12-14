#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[80];
 int i=0,cnt=1;
 clrscr();
 printf("Enter a string:");
 gets(str);
while(str[i] !='\0')
{
if(str[i] ==' ' && str[i+1] != ' ')
cnt++;
i++;
}
printf("count = %d",cnt);
getch();
}
