#include<stdio.h>
#include<conio.h>
void main()
{
int no,i;//flag = 0;
clrscr();
scanf("%d",&no);
for(i= 2;i<no;i++)
{
   if(no % i == 0)
     {
    // flag = 1;
     break;
     }
  // i++;
}
if(no == i)
   printf("prime no");
else
   printf("not prime no");
getch();
}
