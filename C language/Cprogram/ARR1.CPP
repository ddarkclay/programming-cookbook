#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char no[10]= {"naralkar"};
char *ptr=no;
clrscr();
while(*ptr != '\0')
{
printf("\n%c %u",*ptr,ptr);
ptr++;
}
getch();
}
