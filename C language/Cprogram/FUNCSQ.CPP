#include<stdio.h>
#include<conio.h>
int printsq(int);
void main()
{
int i=3;
clrscr();
int total = printsq(i);
printf("square = %d",total);
int j = 5;
int total1 = printsq(j);
printf("square = %d",total1);
getch();

}
int printsq(int a)
{
int t;
t=a*a;
return t;
}

