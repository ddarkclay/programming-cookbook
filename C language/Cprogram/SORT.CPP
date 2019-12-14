/*program to print sorted array */
#include<stdio.h>
#include<conio.h>
void main()
{
int no[10] = {99,11,33,55,39,77,95,45,17,200};
int i,j,temp;
clrscr();
printf("sorted array");
for (i=0;i<9;i++)
{
  for(j=i+1;j<10;j++)
     {
     if (no[i]>no[j])
     {
	temp = no[i];
	no[i]= no[j];
	no[j] = temp;
      }
      }
   }
for(i=0;i<10;i++)
  printf("\n%d",no[i]);
getch();
}


