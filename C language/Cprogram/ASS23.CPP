#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
int max,min;
clrscr();
for(r=1;r<=9;r++)
{
   max=9;
   min=1;

       for(c=1;c<=10-r;)
	{
	   printf("%d ",max--);
	   c++;
	   if (c<=10-r)
	   printf("%d ",min++);
	   c++;
	}
	printf("\n");
}
getch();
}


