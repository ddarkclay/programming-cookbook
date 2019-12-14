#include<stdio.h>
#include<conio.h>
void main()
{
char str[]={"computer"};
char *ptr;
ptr=&str[0];
//int i = 0;
for(;*ptr!='\0';*ptr++)
{
printf("\n%c %u",*ptr,*ptr);
//i++;
}
getch();
}
