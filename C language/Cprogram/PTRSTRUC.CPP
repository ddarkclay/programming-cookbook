#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[25];
};
void main()
{
clrscr();
struct student s1={1,"sanket"};
struct student *ptr;
ptr=&s1;
printf("\n%d",ptr->rollno);
printf("\n%s",ptr->name);
getch();
}
