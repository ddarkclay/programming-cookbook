#include<stdio.h>
#include<conio.h>
#include<string.h>
int r_pal(char st[],int i,int j)
{
if(i>=j)
   return(1);
if(st[i]!=st[j])
   return(0);
return(r_pal(st,i+1,j-1));
}
void main()
{
char st[10];
clrscr();
printf("Enter any string-");
gets(st);
int i=0;
int j=strlen(st);
j--;
int r = r_pal(st,i,j);
if (r==1)
    printf("Is palidnrome");
else
    printf("Not palindrome");
getch();
}
