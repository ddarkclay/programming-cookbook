#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={9,17,25,37,45,56,66,79,82,99};
int high=9,low=0,mid,no,flag=0;
clrscr();
printf("Enter no to be search->");
scanf("%d",&no);
while(low<high-1)
{
mid= (high+low)/2;
if(a[mid] == no)
{
 flag = 1;
 break;
}
else
{
flag = 0;
//break;
}
if(no<a[mid])
 high = mid;
else
 low = mid;
}
if(flag==1)
 printf("Number is found at position %d",mid);
else
 printf("Number is not found");
getch();
}
