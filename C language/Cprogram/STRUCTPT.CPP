#include<stdio.h>
#include<conio.h>
void disp_struct(struct book *);
struct book
{
char name[20];
char author[20];
int callno;
};
void main()
{
clrscr();
struct book n1 = {"Programming in C","Karnighan", 2};
disp_struct(&n1);
getch();
}
void disp_struct(struct book *b)
{
printf("\n %s\n %s\n %d",b->name,b->author,b->callno);
return;
}

