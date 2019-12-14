#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={{101,3,25},{14,90,111},{45,75,95}};
int i,j,k,t,ln;
clrscr();
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
      printf("%4d",a[i][j]);
      printf("\n");
}

for(i=0;i<3;i++)  /* rows*/
   for(j=0;j<3;j++)  /* col*/
      for(ln=i,k=j+1;;k++)
      {
      if(k==3)
      {
      k=0;
      ln++;
      }
      if(ln==3)
	 break;
      if(a[i][j]>=a[ln][k])
      {
      t=a[i][j];
      a[i][j]=a[ln][k];
      a[ln][k]=t;
      }
      }
printf("sorted array\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
      printf("%4d",a[i][j]);
      printf("\n");
}
}
