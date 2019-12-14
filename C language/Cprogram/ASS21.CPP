#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,no,i;
clrscr();
printf("enter the number");
scanf("%d",&no);
i=1;
for(r=1;r<=no;r++)
   {
   for(c=1;c<=r;c++)
   {
     printf(" %d",i);
     i++;
   }
printf ("\n");
}
getch();
}