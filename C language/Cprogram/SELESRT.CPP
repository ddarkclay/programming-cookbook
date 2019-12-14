/* selection sort */
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={17,25,9,4,6,60,77,38,99,1};
int j,k,large,index;
clrscr();
for(k = 0;k<10;k++)
printf("%d ",a[k]);

for(j=9;j>=0;j--)
{
large = a[0];
index=0;
   for(k=0;k<=j;k++)
    {
    if(a[k]>large)
      {
       large =a[k];
       index = k;
      }
    }
a[index]= a[j];
a[j]=large;
}
printf("\nSorted array\n");
for(k = 0;k<10;k++)
printf("%d ",a[k]);
getch();
}
