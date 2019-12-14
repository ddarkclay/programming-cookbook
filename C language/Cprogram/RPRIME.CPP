#include<stdio.h>
#include<conio.h>
int r_prime(int no)
{
static i=2;
if(no==i)
   return(1);
if(no%i==0)
   retur n(0);
i++;
return(r_prime(no));
}
void main()
{
int no;
clrscr();
printf("Enter any number-");
scanf("%d",&no);
int r = r_prime(no);
if (r==1)
    printf("Is prime");
else
    printf("Not prime");
getch();
}
