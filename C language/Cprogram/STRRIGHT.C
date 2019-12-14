#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char n[]="computer";
char m[5];
int o = 3,i,j=0;
int l = strlen(n);
clrscr();
for(i=l-o;i<l;i++)
m[j++]=n[i];
m[j]='\0';
printf("%s",m);
}


