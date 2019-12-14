#include<stdio.h>
#include<conio.h>
struct book
{
 int bno;
 char bname[20];
 float price;
};
void main()
{
 struct book b1;
 puts("Enter Book no. :-");
 scanf("%d",&b1.bno);
 puts("Enter Book name :-");
 scanf("%s",&b1.bname);
 puts("Enter Price");
 scanf("%f",&b1.price);
 printf("%d %s %f",b1.bno,b1.bname,b1.price);
 getch();
}