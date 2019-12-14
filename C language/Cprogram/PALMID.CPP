/* program to print palindrome using mid method*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,len,mid,j=1;
clrscr();
scanf("%s",a);
printf("%s",a);
len=strlen(a);
mid=(len/2);
len--;
for(i=0;i<=mid;i++)
{
   if(a[i]==a[len-i])
   {
   j=0;}
   else
   {j=1;
   }
}
if(j==0)
   printf("\n Is palindrome");
else
   printf("\n Not palindrome");
getch();
}


