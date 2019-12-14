/*count the nos of e's from array of pointers*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
static char *mess[] ={"abcdefgheijklemnope" };
clrscr();
int i;
int cnt=0;
char *p;
p=mess[0];
for(i=0;i<20;i++)
{
  while(*p)
  {
  if(*p=='e')
    cnt++;
    *p++;
  }
}
printf("%d",cnt);
getch();
return;
}



