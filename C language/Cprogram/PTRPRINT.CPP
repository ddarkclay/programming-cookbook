#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str1[]={"computer"};
char *ptr;
clrscr();
for(ptr=str1;*ptr!='\0';)
{
printf("\n%c  %u",*ptr,ptr);
ptr++;
}
/*ptr=str1+8;
int i;
printf("\n");
for(ptr=str1+7;*ptr>=0;*ptr--)
printf("%c ",*ptr);*/
getch();
}
