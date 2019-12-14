/* program to determine length */
#include<stdio.h>
#include<conio.h>
int strlength(char *string)
{
char *cptr=string;
while(*cptr!='\0')
{
++cptr;
}
return(cptr-string);
}
void main()
{
clrscr();
printf("%d",strlength("string length test"));

}



