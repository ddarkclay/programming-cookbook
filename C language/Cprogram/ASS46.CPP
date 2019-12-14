#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100];
int i,j;
clrscr();
for(i=0;i<100;i++)
arr[i]=i+1;
for(i=1;i<100;i++)
{
  if(arr[i] != 0)
    for(j=i+1;j<100;j++)
	if(arr[j] % arr[i] == 0)
	    arr[j] = 0;
}
printf("\nprinting prime numbers");
for(i=0;i<100;i++)
if(arr[i] !=0)
printf("%d  ",arr[i]);
getch();
}
