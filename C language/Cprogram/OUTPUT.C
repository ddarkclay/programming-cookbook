#include<stdio.h>
#include<conio.h>
void main()
{
/*int x=5;
while(x==1)
x=x-1;
printf("%d\n", x);
return 0*/
//float f=4.5;
//printf("%d",4.5);*/
/*while(87)
printf("computer");  */
int d= 0;
int i,j,k;
clrscr();
for(i=1;i<31;++i)
for(j=1;j<31;++j)
for(k=1;k<31;++k)
if(((i+j+k)%3)==0);
   d=d+1;
   printf("%d",d);
   getch();
}
