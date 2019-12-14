#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,len,mid;
int flag = 0;
clrscr();
gets(a);
len = strlen(a);
printf("length = %d\n",len);
mid = len/2;
for(i=0;i <= mid;i++)
{
    if(a[i] == a[len-1-i])
    {
    flag = 1;
    }
    else  {
    flag = 0;
    break; }
}
if(flag == 1)
   printf("\nIs a palindrome");
else
   printf("\n Not a palindrome");
getch();
}
