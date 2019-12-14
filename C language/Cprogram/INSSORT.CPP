#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={101,3,25,5,75,10,90,12,14,95};
int i,j,temp;
clrscr();
for(i=0;i<10;i++)
printf("%d  ",a[i]);
for(j=1;j<10;j++)
{
  i = j-1;
  temp=a[j];
   while(i>=0 && a[i]>=temp)
   {
   a[i+1]=a[i];
   i--;
   }
   a[i+1]=temp;
}
printf("\nsorted array\n");
for(i=0;i<10;i++)  /* rows*/
{
      printf("%d  ",a[i]);
}
getch();
}
