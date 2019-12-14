#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,p,k;
clrscr();
for(r=9;r>=1;r--)
{
	for(c=1;c<=r;c++)
	{
	   printf("%d ",c);
	}
	printf("\n");
	p=c;
	p--;
	for(k=1;k<=r-1;k++)
	printf("%d ",p);
	printf("\n");
	r--;
	}
getch();
}


