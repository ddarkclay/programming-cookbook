#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,cnt=1,check;
clrscr();
a = 1;

while (cnt <= 30)
 {
 for  (i=2; i<=a; i++)
   {
   if (a%i == 0)
     break;
   }
   if (i == a)
    {
     printf ("%d prime number is %d \n",cnt,a);
      cnt++;
    }
    a++;
  }
  getch();
}




