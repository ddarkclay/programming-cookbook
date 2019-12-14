#include "stdio.h"
#include "conio.h"
void main()
{
float a,b,e=0.00001,p,k;
clrscr();
textcolor(GREEN);
do {
//printf(" ************************************************");
printf(" PROGRAM TO FIND SQUARE ROOT OF A");
//printf(" ************************************************");
cprintf("ENTER A NUMBER(-1 to Quit) :");
scanf("%f",&k);

a=k;p=a*a;
while(p-k>=e)
{
b=(a+(k/a))/2;
a=b;
p=a*a;
}
printf("SQUARE ROOT IS = %f",a);
getch();
clrscr();
}
while(k!=-1);
getch();
}