#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=1;i<=10;i++)
{
   for(j=0;j<=9;j++)
   printf("%d ",i+(10*j));
   printf("\n");
}
getch();
}
