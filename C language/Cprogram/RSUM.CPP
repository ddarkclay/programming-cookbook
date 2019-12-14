#include<stdio.h>
#include<conio.h>
int rec_digit(int num)
{
static sum=0;
if(num==0)
   return(0);
sum=sum+num%10;
rec_digit(num/10);
return(sum);
}
void main()
{

int num=0,res=0;
clrscr();
printf("Enter any no-");
scanf("%d",&num);
res=rec_digit(num);
printf("%d",res);
getch();
}
