#include <stdio.h>
#include <conio.h>
void main()
{
int rows, c, r,i,sp=0;
clrscr();
scanf("%d",&rows);
for (r=rows; r>=1 ; r--)
  {
  for (c = 1; c<=r; c++)
    printf ("*");
  for(i=0;i<sp;i++)
    printf (" ");

  for (i = c-1; i>0 ; i--)
    printf("%c",'*');
  printf("\n");
  sp = sp+2;
  }
for (r=1; r<=rows ; r++)
  {
  sp =sp -2;
  for (c = 1; c<=r; c++)
    printf ("*");
  for(i=0;i<sp;i++)
    printf (" ");
  for (i = c-1; i>0 ; i--)
    printf("*");
  printf("\n");
  }
  getch();
}

