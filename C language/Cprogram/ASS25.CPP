#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
char ch;
clrscr();
for(i=5;i>=0;i--)
{
  ch = 65;
  for(j=0;j<i;j++)
  {
 // printf("%c ",ch+j);
    printf("%c ",ch++);
  }
  //j-=2;
    ch-=2;
  for(k=j;k>1;k--)
//  printf("%c ",ch+k);
    printf("%c ",ch--);
  printf("\n");
}
getch();
}