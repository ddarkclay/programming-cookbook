#include<stdio.h>
#include<conio.h>
struct book
{
 int bno;
 char bname[20];
 int price;
};
void main()
{
 struct book b1[5];
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
  puts("Enter Book no. :-");
  scanf("%d",&b1[i].bno);
  puts("Enter Book name :-");
  scanf("%s",&b1[i].bname);
  puts("Enter Price");
  scanf("%d",&b1[i].price);
 }
 printf("\n\nBook no.   Book name    Price");
  for(i=0;i<5;i++)
  printf("\n%d      %s      %d\n",b1[i].bno,b1[i].bname,b1[i].price);

 getch();
}