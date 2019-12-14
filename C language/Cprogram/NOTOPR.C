#include<stdio.h>
#include<conio.h>
# define True 0
void main()
{
int x=0;
clrscr();
printf("Enter no");
scanf("%d",&x);
if (!(x<=0))
    printf("%d",x*x);
else
    printf("Number is zero");
getch();
}
