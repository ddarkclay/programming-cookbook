#include<stdio.h>
#include<conio.h>
#include<string.h>
void fleft(char *,char *,int);
void main()
{
   int n;
   char s1[20];
   char s2[5];
   clrscr();
   printf("\nenter a string->");
   scanf("%s",s1);
   printf("\nEnter  the number->");
   scanf("%d",&n);
   fleft(s1,s2,n);
   printf("%s",s2);
   getch();
}
  void fleft(char *s1,char *s2,int n)
  {
     int i;
     for(i=0;i<n;i++)
   {  *s2=*s1;
       *s2++;
       *s1++;  }
       *s2='\0';
   }





