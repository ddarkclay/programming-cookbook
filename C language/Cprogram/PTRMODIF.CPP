/* program to print ARRAY BY MULTIPLYING with 3 */
#include<stdio.h>
#include<conio.h>
void mul3(int*,int);
void main()
{
int no[5]={1,2,3,4,5};
int i;
clrscr();
mul3(no,5);
for(i=0;i<5;i++)
printf("%d ",no[i]);
getch();
}
void mul3(int *a,int n)
{
int i;
for(i=0;i<n;i++,*a++)
//*(a+i)=*(a+i)*3;
*a = *a * 3;
}
