#include<stdio.h>
#include<conio.h>
void disp_struct(struct book);
struct book
{
char name[20];
char author[20];
int callno;
};
void main()
{
clrscr();
struct book n1 = {"programming in c","Bapat", 2};
disp_struct(n1);
getch();
}
void disp_struct(struct book n1)
{
printf("\n %s %s %d",n1.name,n1.author,n1.callno);
return;
}

