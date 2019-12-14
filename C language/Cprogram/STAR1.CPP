/*
  *   *   *   *
    *   *   *
      *    *
	*
     *     *
   *    *     *
 *   *     *    *
*/


#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,k,sp,row,spcnt;
//clrscr();
printf("enter value of N \n");
scanf("%d",&row);
spcnt=1;
for(r = row;r>=0;r--)
{
     for(sp=0;sp<spcnt;sp++)
       printf(" ");
     for(c=1;c<=r;c++)
      printf("* ");
     printf("\n");
	spcnt+=1;
}
   spcnt = 5;
  for(r=1;r<=row;r++)
{
  for(sp=0;sp<spcnt;sp++)
  printf(" ");
  for(c=1;c<=r;c++)
     printf("* ");
     printf("\n");
   spcnt--;
}
getch();
}
