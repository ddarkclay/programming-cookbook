#include<stdio.h>
#include<conio.h>
void main()
{
char a[30];
/*={" my name is the  abc"};*/
int i,wcnt=0;
clrscr();
gets(a);
for(i=0;a[i] != '\0';i++)
{
if(a[i] == ' '&& a[i+1]!= ' ')
wcnt++;
}
printf("%d",wcnt);
getch();
}