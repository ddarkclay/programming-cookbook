/* print first 10 nos*/
#include<stdio.h>
#include<conio.h>
void main()
{
int b=2,a=2,cnt=1;
clrscr();
while(cnt<=50)
{
   a=2;
   while(a<b)
   {
     if (b % a == 0)
	break;
	a++;
    }
	if (a==b){
	   printf("prime-%d\t",b);
	   cnt=cnt+1;
	   }
     b=b+1;
 }
 getch();
 }



