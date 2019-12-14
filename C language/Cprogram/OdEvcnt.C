#include<stdio.h>
#include<conio.h>
void main()
{
int i,no,oddcnt=0,evencnt=0;
clrscr();
for(i=0;i<10;i++)
{
printf(" enter a number");
scanf("%d",&no);
if(no % 2 ==0)
   evencnt++;
else
   oddcnt++;
}
printf("\neven number count = %d",evencnt);
printf("\nodd number count = %d",oddcnt);
getch();

}
