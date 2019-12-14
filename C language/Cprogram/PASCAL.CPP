#include <stdio.h>
#include <conio.h>

void main()
{
int row , pos, value;
long fact(int);
clrscr();
for (row=0; row<=6; row++)
   {
   /*printf("printing for row = %d \n", row);*/

   for (pos=0; pos<=row; pos++)
     {
     value =(int)( fact(row) / (fact(row-pos)*fact(pos) ) );
     printf("%d	",value);
     }
   printf("\n\n");
   }
   getch();
}

long fact(int n)
{
int factorial=1, i;
if (n<=1) return 1;
for (i =2; i<=n; i++)
  {
    factorial = factorial*i;
  }
return factorial;
}