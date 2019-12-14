#include<stdio.h>
#include<conio.h>
void main()
{
int ch=0,a,b;
/*sum=0;*/
while(ch!=5)
{
a=0;
b=0;
clrscr();
printf("\n1.Addition");
printf("\n2.subtraction");
printf("\n3.multipication");
printf("\n4.division");
printf("\n5.exit");
printf(" \nEnter you choice");
scanf("%d",&ch);
if (ch== 5)
break;
printf("\nenter nos");
scanf("%d %d",&a,&b);
  switch(ch)
     {
     case 1:printf("%d",a+b);break;
     case 2:printf("%d",a-b);break ;
     case 3:printf("%d",a*b);break;
     case 4:printf("%d",a/b);break;
     case 5:break;
     }
     getch();
}


}

