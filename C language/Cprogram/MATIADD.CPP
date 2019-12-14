#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9},sum;
int i,j;
clrscr();
printf("addition\n");
for(i=0;i<3;i++)
{
  sum=0;
   for(j=0;j<3;j++)
   {
   printf("%3d",a[i][j]);
    sum+= a[i][j];
    }
    printf("%3d",sum);
    printf("\n");
}
for(i=0;i<3;i++)
{
sum=0;
for(j=0;j<3;j++)
{
sum+=a[j][i];
}
printf("%3d",sum);
/*printf("\n");*/
}
getch();
}
