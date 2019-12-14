
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char arr1[10];
int i,len;
clrscr();
scanf("%s",arr1);
len = strlen(arr1);
printf("%d",len);
for(i=0;i<len;i++)
{
printf("\n%s",arr1);
}

getch();
}








