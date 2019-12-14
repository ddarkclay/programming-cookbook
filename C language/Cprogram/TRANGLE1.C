#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int no;
scanf("%d",&no);
clrscr();
     for(i=1;i<=no;i++)
    {
      for(j=1;j<=i;j++)
     {
       if(j%2 == 1)
	 printf("1");
       else
	 printf("0");
      }
printf("\n");
}
getch();
}




