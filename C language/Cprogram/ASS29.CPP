#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,no=1,sp,spcnt=4;
clrscr();
for(r=1;r<=5;r++)
{
    for(sp=1;sp<=spcnt;sp++)
    {
	printf("%c",' ');
     }
	for(c=1;c<=r;c++)
	{
	   printf(" %d",no);
	}
	spcnt--;
	no++;
	printf("\n");
}
getch();
}


