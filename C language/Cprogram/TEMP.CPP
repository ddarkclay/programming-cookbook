/* program to print country and captal*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int compare(char[],char s2[]);
void main()
{
char con[6][10]={"canada","england","france","india","Israel","Itly"};
char cap[6][10]={"ottawa","london","paris","new delhi","jerusalem","rome"};
char str[20];
int i,j;
clrscr();
while(1)
{
  i=0;
  j=0;
  printf("Enter country or capital or end to EXIT->");
  gets(str);
  if(compare(str,"end"))
  {
    getch();
    break;
   }
  while(i<=5)
  {
   if(compare(str,con[i]))
    {
     printf("captial of %s is %s",str,cap[i]);
     printf("press any key to continue");
     getch();
     clrscr();
     j=1;
     break;
     }
    i++;
   }
  if(j==1)
     continue;
  else
     i=0;
     while(i<=5)
     {
     if(compare(str,cap[i]))
     {
     printf("%s is captial of %s",str,con[i]);
     printf("press any key to continue");
     getch();
     clrscr();
     break;
     }
    i++;
    }
    getch();
 }
 }

int compare(char s1[],char s2[])
{
int i,j;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]!=s2[i])
   break;
}
if(s1[i]=='\o' && s2[i]=='\0')
   return 1;
else
   return 0;
}


