#include<stdio.h>
#include<conio.h>
void println();    /* Declaration of function */
void main()
{
clrscr();
println();  /* calling of function */
printf("* * * * W E L - C O M E * * *  *\n");
println();
getch();
}
void println()   /* Actual defination */
{
int n;
for(n=1;n<=80;n++)
printf("%c",'-');
}
