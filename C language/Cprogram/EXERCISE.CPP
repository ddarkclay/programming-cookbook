#include<stdio.h>
#include<conio.h>
void main()
{
 int c,p,n;
 clrscr();
 for(n=1;n<=3;n++)
 {
 printf("Enter credit card number :" );
 scanf("%d",&c);
 printf("Enter pin number number : ");
 scanf("%d",&p);
  if(c == 7542 && p == 1242)
  {
    printf("WEL - COME");
    break;
  }
   else
    printf("ERROR\n");
 }
 if(n > 3)
  printf("Sorry!Your attempts are over");

 getch();
}

