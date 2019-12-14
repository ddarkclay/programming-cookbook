#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for (i = 1,j = 10;i<10 && j>=1;i+=2, j -=2)
    printf("  %d %d",i,j);
getch();
}
