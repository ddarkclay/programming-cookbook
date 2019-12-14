#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c;
//char ch = 65;
clrscr();
for(r= 'A';r<= 'E';r++)
{
   for(c= r;c<='E';c++)
    printf("%2c ",c);
   printf("\n");
}
getch();
}
