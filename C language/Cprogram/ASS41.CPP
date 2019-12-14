#include<stdio.h>
#include<conio.h>
void main()
{
   int arr[20],i;
   int zer=0,pos=0,neg=0;
   clrscr();
   for(i=0;i<20;i++)
   {

   scanf("%d",&arr[i]);
   }
   for(i=0;i<20;i++)
  {
  if (arr[i]<0)
     neg++;
   else if(arr[i]>0)
	pos++;
   else
     zer++;
  }
printf("\npos-%d neg-%d zer-%d",pos,neg,zer);
getch();
}
