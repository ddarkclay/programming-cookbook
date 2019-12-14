#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char m[10];
int cnt=0,i=0;
clrscr();
gets(m);
while(m[i] != '\0')
{
if(m[i] == ' ')
   cnt++;
i++;
}
printf("%d",cnt);
}


