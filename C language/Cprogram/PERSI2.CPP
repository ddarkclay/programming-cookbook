#include<stdio.h>
#include<conio.h>
void main()
{
int no,cnt=0,rem=1;
char ch;
clrscr();
scanf("%d",&no);
while(no>=10)
{
rem = no % 10;
no = no/10;
no = no * rem;
cnt++;
}
printf("count = %d",cnt);
getch();
printf("\n%d",rem);
}