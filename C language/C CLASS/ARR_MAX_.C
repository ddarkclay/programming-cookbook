#include<stdio.h>
#include<conio.h>
void main()
{
 int ar[20],i,n,max,min;
 clrscr();
 printf("Enter range of array :");
 scanf("%d",&n);
 printf("Enter array elements :");
 for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
 printf("Array elements are :");
 for(i=0;i<n;i++)
    printf("%d ",ar[i]);
 max=ar[0];
 for(i=0;i<n;i++)
     {
       if(max<ar[i])
	 {
	   max=ar[i];
	 }
     }
 printf("\nMaximum number of an Array is %d",max);
 min=ar[0];
 for(i=0;i<n;i++)
     {
       if(min>ar[i])
	 {
	   min=ar[i];
	 }
     }
 printf("\nMinimum number of an Array is %d",min);
 getch();
}
