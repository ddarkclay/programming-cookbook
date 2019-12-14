#include<stdio.h>
#include<conio.h>
void main()
{
char *name[5] =  {"Roshni","Manish","Mona","Baiju","Ritu"};
int i;
char *t,*u;
clrscr();
t = name[3];
u = name[4];
printf("\n*t = %s *u = %s",t,u);
name[3] = u;
name[4] =t;
for(i = 0;i<=4;i++)
printf("\n%s",name[i]);
getch();
}
