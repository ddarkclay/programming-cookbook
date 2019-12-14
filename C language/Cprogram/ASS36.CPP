/* Program to print sum of fact */
#include<stdio.h>
#include<conio.h>
void main()
{
 float f,i,fact=1;
 float sum;
 clrscr();
 for(f=1;f<=7;f++)
 {
 fact=1;
  for(i=1;i<=f;i++)
   {
   fact=fact*i;
   }
   printf("\n%f %f",f,fact);
   sum=sum+(f/fact);
  }
  printf("\n% 0.4f",sum);
getch();
}

