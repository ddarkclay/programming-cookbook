/* Structure pointer*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct prop
{
int no;
char name[20];
long price;
};
void main()
{
struct prop p1;
struct prop *ptr;
ptr=&p1;
clrscr();
ptr->no=1;
strcpy(ptr->name,"computer");
ptr->price=30000;
printf("%d  %s  %ld ",ptr->no,ptr->name,ptr->price);
/*printf("%s",ptr->name);
printf("   %ld",ptr->price);*/
getch();
}


