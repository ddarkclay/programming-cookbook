#include<stdio.h>
#include<conio.h>
void main()
{
char opr=' ';
int a,b;

puts("Enter 2 numbers:");
scanf("%d%d",&a,&b);
flushall();
puts("Enter operator:");
scanf("%c",&opr);
switch(opr)
{
case '+':
     printf("%d",a+b);break;
case '-':
     printf("%d",a-b);break;
}
getch();
}
