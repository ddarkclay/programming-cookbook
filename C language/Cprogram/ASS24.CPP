#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
//char ch=65;
clrscr();
for(i=5;i>=0;i--)
{
  for(j=1;j<=i;j++)
  {
  printf("%d ",j);
  }
  j-=2;
  for(k=j;k>=1;k--)
  printf("%d ",k);
  printf("\n");
}
getch();
}