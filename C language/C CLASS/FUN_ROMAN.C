#include<stdio.h>
#include<conio.h>
int roman(int,int,char);
void main()
{
 int no;
 clrscr();
 printf("Enter a number :");
 scanf("%d",&no);
 printf("Roman no is :");
 no=roman(no,1000,'M');
 no=roman(no,500,'D');
 no=roman(no,100,'C');
 no=roman(no,50,'L');
 no=roman(no,10,'X');
 no=roman(no,5,'V');
 no=roman(no,1,'I');
 getch();
}
int roman(int y,int k,char ch)
{
 int i,j;
 if(y==9)
   {
     printf("IX");
     return(y%9);
   }
   if(y==4)
   {
     printf("IV");
     return(y%4);
   }
  j=y/k;
  for(i=1;i<=j;i++)
      printf("%c",ch);
  return(y-k*j);
}
