/*program to print pythagorian nos*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=9;i=i+2)
{
   for(j=i+1;j<=9;j++)
   {
    k=j+1;
    if(i*i+j*j==k*k)
      {
       printf("\n %d %d %d",i,j,k);
       break;
      }
    }
}
getch();
}









