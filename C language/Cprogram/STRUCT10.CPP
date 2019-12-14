#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[25];
int marks;
};
void main()
{
struct student s[3];
int i;
int max, marks;
clrscr();
for(i=0;i<3;i++)
{
printf("enter rollno name marks");
scanf("%d %s %d",&s[i].rollno,s[i].name,&s[i].marks);
}
max=s[0].marks;
int maxno=0;
for(i=1;i<3;i++)
if(max<s[i].marks)
{
max =s[i].marks;
maxno=i;
}
printf("%s %d",s[maxno].name,max);
getch();
}
