#include<stdio.h>
#include<conio.h>
void main()
{
char a[25]={" Hi my name is svn"};
int i=0,wcnt=0;
clrscr();
//scanf("%s",a);
//printf("%s",a);

while(a[i]!='\0')
{
if(a[i]==' ' && a[i+1]!=' ')
wcnt++;
i++;
}
printf("no of words ->%d",wcnt);
getch();
}

