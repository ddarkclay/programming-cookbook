#include<stdio.h>
#include<conio.h>
void main()
{
int a,no=0;
/*sum=0;*/
clrscr();
printf("enter no");
scanf("%d",&no);
/*while(no>0)
{
sum = (sum*10)+(no%10);
no=no/10;
} */
while(no > 0)
{
   a=no%10;
   switch(a)
     {
     case 0:printf("\tzero");break;
     case 1:printf("\tone");break ;
     case 2:printf("\ttwo");break ;
     case 3:printf("\tthree");break;
     case 4:printf("\tfour");break;
     case 5:printf("\tfive");break;
     case 6:printf("\tsix");break;
     case 7:printf("\tseven");break ;
     case 8:printf("\teight");break ;
     case 9:printf("\tnine");break;
     }
   no=no/10;
   }
getch();
}

