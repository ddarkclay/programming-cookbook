#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,p,no;
clrscr();
for(r=9;r>=1;r--)     /* row loop */
{  no = r;
   for(c=1;c<=r;c++)
      printf("%d ",c);
   printf("\n");

   for(p=1;p<=r-1;p++)
      printf("%d ",no);
      printf("\n");
  r--;
}
getch();
}
