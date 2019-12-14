#include<stdio.h>
#include<conio.h>
#include<string.h>
void fleft(char [],int);
void main()
{
   int n;
   char s1[20];
   clrscr();
   printf("\nenter a string->");
   scanf("%s",s1);
   printf("\nEnter  the number->");
   scanf("%d",&n);
   fleft(s1,n);
   getch();
}
  void fleft(char s1[],int n)
  {
     int i;char s2[10];
     for(i=0;i<n;i++)
   {  s2[i]=s1[i];}
     s2[i]='\0';
     puts(s2);
     getch();
   }





