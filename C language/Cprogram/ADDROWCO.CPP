#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3];
int i,j,rsum,csum;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
{
rsum=0;
for(j=0;j<3;j++)
{
printf("%2d ",a[i][j]);
rsum+= a[i][j];
}
printf("%2d ",rsum);
printf("\n");
}
for(i=0;i<3;i++)
{
csum=0;
for(j=0;j<3;j++)
{
csum+= a[j][i];
}
printf("%2d ",csum);
}

getch();
}



