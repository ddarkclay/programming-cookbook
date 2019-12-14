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
 int i=0;
 clrscr();
 while(i<5)
 {
  puts("Enter Book no. :-");
  scanf("%d",&b1[i].bno);
  puts("Enter Book name :-");
  scanf("%s",&b1[i].bname);
  puts("Enter Price");
  scanf("%d",&b1[i].price);
  printf("%d %s %d\n\n\n",b1[i].bno,b1[i].bname,b1[i].price);
  i++;
 }
 getch();
}