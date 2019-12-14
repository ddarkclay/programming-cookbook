/* program to sort array of string recursive function */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *,char *);
void main()
{
int i,j;
char name[5][10]={"abc","abd","wxy","mno","ter"};
clrscr();
printf("Enter the string->");
for(i=0;i<5;i++){
printf("\n%s ",name[i]); }
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
  if(strcmp(name[i],name[j])>=1)
      swap(name[i],name[j]);
}
}
printf("\nsorted array\n");
for(i=0;i<5;i++)
printf("\n%s",name[i]);
getch();
}
void swap(char *s1,char *s2)
{
int i;
char temp;
for(i=0;i<=3;i++)
{
temp=s1[i];
s1[i]=s2[i];
s2[i]=temp;
}
}
