#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,p,no,rem=0;
 int a[10];
 fflush(stdin);
 clrscr();
 printf("Enter any number:");
 scanf("%d",&no);
 while(no>=1)
 {
  rem = no%2;
/*  printf("%d",rem);*/
  a[i++] = rem;
  no = no/2;
 }
 p=i;
 p--;
 printf("\narray\n");
 for(i=p;i>=0;i--){
     printf("%d",a[i]);}
 getch();
}