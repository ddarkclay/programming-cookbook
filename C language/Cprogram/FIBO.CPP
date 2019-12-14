/* TOcreate fibinnaces series*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,b=1,c,no=3,no1;
 char flag = 't';
 clrscr();
 scanf("%d",&no1);
 printf("%d %d ",a,b);
 while(no<=15)
 {
  c = a+b;
  if(no1 == c){
    flag = 't';
    break; }

  else
  flag = 'f';
  printf("%d ",c);
  a=b;
  b=c;
  no++;
 }
 if (flag=='t')
    printf("Number is in fibo series");
 else
    printf("not in fiboo");
getch();
}
