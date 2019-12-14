#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int ch=64;
clrscr();
for(i=4;i>=1;i--)
{
    for(j = 1;j<i;j++)
	printf("%c ",ch+j);
    for(k=j;k>=1;k--)
	printf("%c ",k+ch);
     printf("\n");
}
getch();
}
