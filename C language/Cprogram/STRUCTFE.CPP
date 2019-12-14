#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[25];
int fees;
};
void main()
{
struct student s[3];
int i;
long totfees=0;
clrscr();
for(i=0;i<3;i++)
{
printf("enter rollno name fees");
scanf("%d %s %d",&s[i].rollno,s[i].name,&s[i].fees);
totfees+=s[i].fees;
}
printf("total fees=%ld",totfees);
getch();
}