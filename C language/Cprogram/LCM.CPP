/*program to print lcm of nos*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n1=0,n2=0,lcm;
clrscr();
scanf("%d %d",&n1,&n2);
lcm=n1;
    while(lcm % n1 != 0 || lcm % n2 != 0)
{
lcm++;
}
printf("%d",lcm);
getch();
}


