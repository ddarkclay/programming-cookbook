/* write a function to insert a string at the given position*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void insert(char [],char [],int);
void main()
{
char s[20],t[20];
int p;
clrscr();
printf("Enter a string->");
gets(s);
printf("Enter a string->");
gets(t);
printf("Enter the position->");
scanf("%d",&p);
insert(s,t,p);
getch();
}
void insert(char s1[],char s2[],int p)
{
int i,j,k;
int ls1=strlen(s1);
int ls2=strlen(s2);
for(i=ls1;i>=p-1;i--)
{
s1[i+ls2]=s1[i];
s1[i]=' ';
}
for(i=0;s2[i]!='\0';i++)
s1[i+p-1]=s2[i];
puts(s1);
}
