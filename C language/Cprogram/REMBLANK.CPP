/* program to remove blanks */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void rem_blank(char []);
void main()
{
char s[50];
clrscr();
gets(s);
rem_blank(s);
printf("\last%s",s);
getch();
}
void rem_blank(char s[])   /* defination of function*/
{
int i=0,j;
for(i=0,j=0;s[i]!='\0';i++)
   {
   if(s[i]==' ' && s[i+1]==' ')
     {
     for(j=i;s[j]!='\0';j++)
     s[j]=s[j+1];
     s[j]='\0';
     i--;
    printf("\n%s",s);
    }
   }
/*printf("%s",s);*/

}

