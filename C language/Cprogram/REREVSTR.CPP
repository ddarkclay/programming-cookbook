/* program to print accepted no's in recurrsion */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev_no(int []);
void main()
{
int a[10],i,x;
clrscr();
printf("Enter any values-\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
rev_no(a);
//printf("%d",x);
getch();
}
void rev_no(int a[])
{
static j=0;
if(j>=10)
   return;
j++;
rev_no(a);
printf(" %d",a[--j]);
return;
}

