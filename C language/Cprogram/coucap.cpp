/* program to print country and capital*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int compare(char[],char s2[]);
void main()
{
char con[6][10]={"Canada","England","France","India","Israel","Itly"};
char cap[6][10]={"Ottawa","London","Paris","New delhi","Jerusalem","Rome"};
char str[20];
int i,flag;
clrscr();
while(1)
{
  i=0;
  flag=0;
  printf("Enter Country or Capital or end to Exit->");
  gets(str);
  if(compare(str,"end"))
    {
      printf("\n\n\n\n\nPress any key to continue...");
      getch();
      break;
     }
   while(i<=5)       /* find out captial */
   {
     if(compare(str,con[i]))
     {
       printf("\n\n\nCaptial of %s is %s",str,cap[i]);
       printf("\n\n\npress any key to continue.....");
       getch();
       clrscr();
       flag=1;
       break;
     }
       i++;
   }
  if((flag==0)&&(i==6)) {
     printf("\n\n\nCountry not found");
     printf("\n\n\nPress any key to continue....");
     getch();
     clrscr();}
  if(flag==1)
     continue;
  else
     i=0;
     while(i<=5)          /* find out country */
     {
	if(compare(str,cap[i]))
	{
	 printf("\n\n\n%s is captial of %s",str,con[i]);
	 printf("\n\n\nPress any key to continue......");
	 getch();
	 clrscr();
	 break;
	}
	i++;
     }
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
if(s1[i]=='\0' && s2[i]=='\0')
   return 1;
else
   return 0;
}


