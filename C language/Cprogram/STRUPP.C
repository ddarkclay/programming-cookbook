#include<stdio.h>
#include<conio.h>
#include<string.h>
void upper(char[],char[]);
void main()
{
char n[]="computer";
char m[10];
int i,j;
upper(n,m);
clrscr();
printf("%s",m);
}
void upper(char x[],char y[])
{
int l = strlen(x),i;
for(i=0;i<l;i++)
y[i]=x[i]-32;
y[i]='\0';
}


