#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,spcnt=3,sp,c1;
 char temp='z';
 char ch='z';
 clrscr();

  for(r=1;r<=4;r++)
       {
	 ch=temp;
	 for(sp=1;sp<=spcnt;sp++)
	  {
	      printf(" ");
	   }
	  for(c=1;c<=r;c++)
	     {
	     printf("%c",ch++);
	     }
	     c--;
	   for(c1=c;c1>1;c1--)
		 {
		  ch-=2;
		  printf("%c",ch);
		 }

	       printf("\n");
	       spcnt--;
	       temp--;
	       }
		    getch();
	     }