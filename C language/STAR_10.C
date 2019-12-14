#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,n,ln;
clrscr();
printf("Enter lines");
scanf("%d",&ln);
  for(r=1;r<=ln;r++)
    {
      n=r;
      for(c=1;c<=r;c++)
      {
      printf("%d",n++);
      }
      printf("\n");
    }
  getch();
}