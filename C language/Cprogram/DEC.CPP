#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10],temp;
 int i,j,len;
 clrscr();
 scanf("%s",a);
 len = strlen(a);
 for(j=0;j<=len-1;j++)
 {
  for(i=j+1;i<len;i++)
  {
   if (a[j] > a[i])
   {
   temp=a[i];
   a[i] = a[j];
   a[j] = temp;
   }
 }
 }
 printf("%s",a);
 getch();
 }