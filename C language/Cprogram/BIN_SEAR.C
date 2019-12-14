/* Binary Search */
#include<stdio.h>
#include<conio.h>
void main()
{
int ar[10]={1,2,3,4,5,6,7,8,9,10};
int i,high=9,low=0,x, mid,fnd = 0;
clrscr();
puts("\n Enter value to be searched");
   scanf("%d",&x);
while(low<=high)
{
 mid = (low+high)/2;
 if(x < ar[mid])
    high=mid-1;
 else if(x > ar[mid])
    low=mid+1;
 else if(x==ar[mid])
    {
      printf("%d is located at location %d",x,mid+1);
      fnd = 1;
      break;
    }
  }
  if(fnd == 0)
    printf("No not found");
 getch();
}

