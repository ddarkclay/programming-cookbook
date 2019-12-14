#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,len,pal=0;
char a[5]="";
clrscr();
printf("Enter any string =");
scanf("%s",a);
len=strlen(a);
printf("\n%s ",a);
for(i=0;i<len;i++)
{
  if(a[i] != a[len-1-i])
      break;
}
if (i == len)
   printf("Is palindrome");
else
   printf("Not palindrome");
getch();
}
