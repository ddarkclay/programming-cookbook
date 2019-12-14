#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i,j=0;
char s1[20]={"mahrashtra"};
char s2[20];
int num = 4;
clrscr();
int len = strlen(s1);
len--;
for(i=len-num+1;i<=len;i++)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
printf("\nright char=");
printf("%s",s2);
}
