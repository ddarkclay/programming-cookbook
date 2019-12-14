#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={3,5,7,9,11};
int b[7]={1,4,6,8,12,13,14};
int c[15];
int i=0,j=0,k=0;
clrscr();
for (i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
 for (i=0;i<7;i++)
printf("%d ",b[i]);
i = 0;
j = 0;
while((i<=3) || (j<=6))
{
  if(a[i] < b[j])
      {
       if(i<=4)
      c[k++]=a[i];
       i++;}
   else
      {c[k++]=b[j];
      j++;}
}
printf("\n");
for (i=0;i<k;i++)
printf("%d ",c[i]);
getch();
}

