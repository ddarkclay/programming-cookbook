#include<stdio.h>
#include<conio.h>
#include<string.h>
void fright(char [],int);
void main()
{
   int n;
   char s1[20];
   clrscr();
   printf("\nenter a string->");
   scanf("%s",s1);
   printf("\nEnter  the number->");
   scanf("%d",&n);
   fright(s1,n);
   getch();
}
  void fright(char s1[],int n)
  {
     int i;char s2[10];
     int l = strlen(s1);
     int p=0;
     int i1=l-n;
     for(i=i1;i<l;i++)
	{  s2[p++]=s1[i];}
     s2[p]='\0';
     puts(s2);
     getch();
   }





