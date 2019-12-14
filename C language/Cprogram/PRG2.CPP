#include<stdio.h>
#include<conio.h>
void main()
{
int no,temp;
printf("Enter any no\n") ;
scanf("%d",&no);
while(no!=0)
{
temp = no%10;
printf("%d",temp);
no=no/10;
}
getch();
}
