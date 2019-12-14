#include<stdio.h>
#include<conio.h>
void main()
{
int no1[4][4];
int no2[4][4];
int r,c;
clrscr();
printf("enter no for array A\n");
for(r=0;r<4;r++)
{
   for(c=0;c<4;c++)
      scanf("%d",&no1[r][c]);
}
for(r=0;r<4;r++)
{
   for(c=0;c<4;c++){
      printf("%2d  ",no1[r][c]);}
      printf("\n");
}
for(r=0;r<4;r++)
{
for(c=0;c<4;c++)
no2[r][c] = no1[c][r];
}
for(r=0;r<4;r++)
{
   for(c=0;c<4;c++){
      printf("%2d  ",no2[r][c]);}
      printf("\n");
}
getch();
}

