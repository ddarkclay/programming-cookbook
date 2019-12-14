/* General Program */
#include<stdio.h>
#include<conio.h>
void copychar(int,char *,char *);
void main()
{
 int n;
 char x[20],y[20];
 printf("Enter a string =>");
 gets(x);
 printf("Enter number =>");
 scanf("%d",&n);
 copychar(n,x,y);
 puts(y);
 getch();
}
void copychar(int n,char *x1,char *y1)
{
 int i;
 for(i=0;i<n;i++)
 {
  *y1 = *x1;
  *y1++;
  *x1++;
 }
 *y1 = '\0';
}