#include<stdio.h>
#include<conio.h>
# define True 0
void main()
{
int a= 5,b = 10;
clrscr();
printf("Before swapping - %d %d",a,b);
/*a=a+b;
b=a-b;
a=a-b;
a=a*b;
b=a/b;
a=a/b;*/
a = (a*b)/a;
b = (a*b)/b;
printf("\nafter swapping - %d %d",a,b);
getch();
}
