/* program to print elements of an array*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int flen(char *str)
{
char strptr=str;
while(*strptr)
{
strptr++;
}
return(strptr-str);
}

void main()
{
printf("%d",flen("this is the string"));
}


