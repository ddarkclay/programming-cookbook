#include<stdio.h>
#include<conio.h>
#include<string.h>
//rec display(struct student);
typedef struct
{
int rollno;
char name[25];
int marks;
}rec;
void main()
{
clrscr();
rec s={100,"sanket",80};
rec display(rec s);
s= display(s);
printf("\noutside function display = %d %s %d",s.rollno,s.name,s.marks);
}
rec display(rec s)
{
printf("\nin function display = %d %s %d",s.rollno,s.name,s.marks);
s.rollno = 120;
strcpy(s.name,"supriya");
s.marks = 90;
return (s);
}
