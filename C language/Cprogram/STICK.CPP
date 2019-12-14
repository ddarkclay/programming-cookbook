#include<stdio.h>
#include<conio.h>
void main()
{
int p,c;
int m=21;
clrscr();
while(1)
{
  printf("\n\n no of matchstick left = %d",m);
  printf("\npick up 1,2,3,4 match stick ");
  scanf("%d",&p);
  m=m-p;
  printf("\n of match sticks left = %d",m);
  if (m>=17 && m<=20)
   c=m-16;
  if(m>=12 && m<15)
   c=m-11;
  if(m>=7 && m<=10)
   c=m-6;
  if(m>=2 && m<=5)
   c=m-1;
  printf(" \nOut of which computer picks up %d",c);
  m=m-c;
  if (m==1)
   {
   printf("\n you lost");
   break;
   }
 }
}
