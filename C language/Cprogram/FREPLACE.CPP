#include<stdio.h>
#include<conio.h>
#include<string.h>
void freplace(char [],char,char);
void main()
{
   char s1[20];
   char p,q;
   fflush(stdin);
   clrscr();
   printf("Enter a string->");
   //scanf("%s",s1);
   gets(s1);
   printf("Enter find char\n");
   scanf("%c %c",&p,&q);
   freplace(s1,p,q);
   getch();
}
  void freplace(char s1[],char f1,char r1)
  {
     int i;
     char ch1=f1;
     char ch2=r1;
     for(i=0;i<strlen(s1);i++)  {
     if(s1[i]==ch1)
      s1[i]=ch2;   }
     puts(s1);
   }





