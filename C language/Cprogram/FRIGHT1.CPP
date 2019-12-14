#include<stdio.h>
#include<conio.h>
#include<string.h>
void fright(char [],int);
void main()
{
   int n;
   char s1[20];
   flushall;
   clrscr();
   printf("enter a string");
   scanf("%s",s1);
   scanf("%d",&n);
   fright(s1,n);
   getch();
}
  void fright(char s1[],int n)
  {
     int i;char s2[10];int j=0;
     for(i=strlen(s1)-n;i<strlen(s1);i++)
   {  s2[j++]=s1[i];}
     s2[i]='\0';
     puts(s2);
   }





