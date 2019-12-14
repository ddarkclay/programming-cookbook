#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c;
char ch = 65;
clrscr();
for(r=5;r>=1;r--)
{
   ch = 65;
   for(c=1;c<=r;c++)
    printf("%2c ",ch++);
   printf("\n");
}
getch();
}
