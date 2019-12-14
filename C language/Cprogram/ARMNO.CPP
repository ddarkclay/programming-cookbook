#include<stdio.h>
#include<conio.h>
void main()
{
int f1,f2,f3;
int i,arm=0,cnt=0;
int no;
clrscr();
for(i=1;i<500;i++)
{
f1= i%10;
f2 = i/100;
f3 = ((i-(f2*100))/10);
arm = (f1*f1*f1)+(f2*f2*f2)+(f3*f3*f3);
if(i==arm){
  // printf("%d %d %d",f1,f2,f3);
   printf("%d  ",arm);
   cnt++;
    arm = 0;
   }
}
getch();
}