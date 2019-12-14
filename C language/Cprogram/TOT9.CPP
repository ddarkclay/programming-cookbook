#include<stdio.h>
#include<conio.h>
void main()
{
  int i,sum,no;
  clrscr();
  for(i=1;i<=1000;i++)
  {
    sum=0;
    no=i;
    while(no>0)
      {
	 sum+=no%10;
	 no=no/10;
      }
       if(sum==9)
	printf("\t%d",i);
    }
}