/* program to print second greatest no*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,max2=0,max=0;
int no[5]={60,11,5,2,50};
clrscr();
max = no[0];
for(i=1;i<5;i++)
  {
  if(no[i] > max)
  {
     max2=max;
     max=no[i];
  }
  else
     if(no[i] > max2)
	max2=no[i];
}
printf("\nGreatest no is %d",max);
printf("\n2nd greatst no is %d",max2);
getch();
}

