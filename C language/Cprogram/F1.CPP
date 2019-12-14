/* program to call function*/
#include<stdio.h>
#include<conio.h>
void printline();   /* declaration of fn*/
void main()
{
clrscr();
printline(); /* calling of function*/
printf("welcome\n");
printline();
}
void printline()   /* defination of function*/
{
int i;
for(i=1;i<40;i++)
printf("-");
printf("\n");
}