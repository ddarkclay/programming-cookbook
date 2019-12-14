#include<stdio.h>
#include<conio.h>
void main()
{
char str[]={"computer"};
char *ptr;
ptr=&str[0];

for(;*ptr!='\0';*ptr++)
{
printf("\n%c",*ptr);
}
getch();
}
