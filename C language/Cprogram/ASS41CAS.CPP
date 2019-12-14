#include<stdio.h>
#include<conio.h>
void main()
{
   int arr[20],i;
   int zer=0,pos=0,neg=0,no=0;
   clrscr();
   for(i=0;i<3;i++)
   {
      printf("number %d = ",i);
      scanf("%d", &arr[i]);
      printf("\n");
   }
   for(i=0;i<3;i++)
     {
     if (arr[i] < 0)
	no = 1;
     if (arr[i] == 0)
	no = 2;
     if (arr[i] > 0)
	no = 3;
    switch (no)
      {
      case 1:
	printf("Arrey[%d] is negative. Value =%d \n",i, arr[i]);
	neg++;
	break;
      case 2:
	printf("Arrey[%d] is zero. Value = %d \n",i, arr[i]);
	zer++;
	break ;
      case 3:
	printf("Arrey[%d] is positive. Value = %d \n",i, arr[i]);
	pos++;
	break;
      }
   }
printf("\npos-%d neg-%d zer-%d",pos,neg,zer);
getch();
}
