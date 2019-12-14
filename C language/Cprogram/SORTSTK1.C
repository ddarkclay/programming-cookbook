/* sorting a stack */
#include<stdio.h>
#include<conio.h>
#define M 10
int top;
void push1(int arr[],int t)
{
top++;
arr[top]=t;
}

void display(int arr[])
{
int i;
if(top==-1)
  printf("stack is empty");
else
   {
	printf("\n");
	for(i=top;i>0;i--)
	printf("%d ",arr[i]);
    }
}

void sort(int arr[])
{
int i,j,k;
for(i=0;i<=top;i++)
{
    for(j=i+1;j<=top ;j++)
    {
    if(arr[i]>arr[j])
    {
    k=arr[i];
    arr[i]=arr[j];
    arr[j]=k;
    }
  }
}
void main()
{
int stk[M],j,k;
top=-1;
clrscr();
for(j=0;j<=M;j++)
{
printf("\n Enter value");
scanf("%d",&j);
push1(stk,j);
}
display(stk);
sort(stk);
printf("\nAfter sorting :");
display(stk);
getch();
}
