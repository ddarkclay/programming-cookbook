#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
int rollno;
char name[25];
int marks;
};

struct student display(struct student);
void main()
{
clrscr();
struct student s={100,"sanket",80};
// struct student display();
s = display(s);
printf("\noutside function display = %d %s %d",s.rollno,s.name,s.marks);
getch();
}
struct student display(struct student s)
{
printf("\nin function display = %d %s %d",s.rollno,s.name,s.marks);
s.rollno = 120;
strcpy(s.name,"supriya");
s.marks = 90;
return (s);
}
