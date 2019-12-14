#include<stdio.h>
#include<conio.h>
void main()
{
int ar[5]={10,3,15,5,9};
int c,d,n=5,swap;
for(c=0;c<n-1;c++)
{
  for(d=0;d<n-c-1;d++)
   {
   if(ar[d]>ar[d+1])
      {
      swap = ar[d];
      ar[d]=ar[d+1];
      ar[d+1]=swap;
      }
    }
}
for(c=0;c<5;c++)
   printf("%d  ",ar[c]);
}
