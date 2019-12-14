#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,r=7,no=1;
clrscr();
for(i=0;i<r;i++)
{
   for(k=r;k>i;k--)
      printf(" ");
   no = 1;
   for(j=0;j<=i;j++)
      {
      printf("%d ",no);
      no=no*(i-j)/(j+1);
      }
    printf("\n");
}
getch();
}
