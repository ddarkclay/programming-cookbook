#include<stdio.h>
#include<conio.h>

void main()
{
char str[25];
int cnt=1,i=0;
clrscr();
gets(str);
while(str[i] != '\0')
{
if(str[i] == ' ' && str[i+1] != ' ')
   cnt++;
i++;
}
printf("words count = %d",cnt);
getch();
}


