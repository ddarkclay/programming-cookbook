#include<stdio.h>
#include<conio.h>
void main()
{
 int no,i,flag=0;
 clrscr();
 printf("Enter a Number :");
 scanf("%d",&no);
 for(i=2;i<no;i++)
    {
       if(no%i==0)
       {
	 flag=1;
	 break;
       }
     }
 if(flag==1)
    printf("Not a Prime Number");
 else
    printf("Prime Number");
 getch();
}