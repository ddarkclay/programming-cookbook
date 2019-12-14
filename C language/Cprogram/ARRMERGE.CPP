/* program to print rotation of characters*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[4]={1,3,5,7};
int b[4]={2,4,6,8};
int c[10];
int i,j,k=0,case_val = 0;
clrscr();
for(i=0,j=0;i<=4 && j<=4;)
{
if ((i < 4) && (j < 4)) case_val = 1;
if ((i >= 4) && (j < 4)) case_val = 2;
if ((j >= 4) && (i < 4)) case_val = 3;

switch (case_val)
  {
  case 1:
     if(a[i]<b[j])
	{
	c[k++]=a[i++];
	printf("\nc-%d i-%d",c[k-1],i);
	}
      else
	{
	c[k++]=b[j++];
	printf("\nc-%d j-%d",c[k-1],j);
	}
      break;
  case 2:
      c[k++]=b[j++];
      printf("\nc-%d j-%d",c[k-1],j);
      break;
   case 3:
      c[k++]=a[i++];
      printf("\nc-%d i-%d",c[k-1],i);
      break;
  }
}
printf("\n");
for(i=0;i<8;i++)
   printf("%d ",c[i]);
getch();
}








