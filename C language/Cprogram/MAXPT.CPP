#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
int fmax(int[]);
void main()
{
int a[10];
int i,j,max=0;;
clrscr();
printf("addition\n");
for(i=0;i<10;i++)
{
   scanf("%d",&a[i]);
}
    max=fmax(a);
    printf("max%d",max);
    getch();
}
  int fmax(int a[10])
  {
  int max=a[0],i;
  int *p;
   p=a;
  for(i=0;i<10;i++,*p++)
  {
    if(max<*p)
     max=*p;
  }
  return max;
}
