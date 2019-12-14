#include<stdio.h>
#include<conio.h>
void main()
{
int pas[10][10];
int i,j;
clrscr();
for(i=0;i<=5;i++)
{
   pas[i][0]=1;
   for(j=0;j<=i+1;j++)
   {
    pas[i][j] = pas[i-1][j-1]+pas[i-1][j];
    if(i!=0)
      pas[i][i]=1;
   }
}
 for(i=0;i<5;i++)
 {
    for(j=0;j<i+1;j++)
	printf("%3d",pas[i][j]);
    printf("\n");
}
getch();
}
