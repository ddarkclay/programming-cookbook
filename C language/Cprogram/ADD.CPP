#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
clrscr();
for(i = 1;i<=10;i++)
{
 for ( j = 2 ;j <= 9;j++)
     printf("%2d*%2d=%2d  ",j,i,i*j);
     printf("\n");
}
getch();
}