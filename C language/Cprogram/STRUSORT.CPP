/* program to sort the structure */
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
int rollno;
char name[25];
int marks;
};
void main()
{
struct student s[5];
int i,j;
int max, marks;
int tempm,tempr;
char tempn[20];
clrscr();
for(i=0;i<5;i++)
{
printf("enter rollno name marks");
scanf("%d %s %d",&s[i].rollno,s[i].name,&s[i].marks);
}
//max=s[0].marks;
//int maxno=0;
for(i=0;i<5;i++)
   for(j=i+1;j<5;j++)
     if(s[i].marks > s[j].marks)
	{
	tempm = s[i].marks;
	s[i].marks = s[j].marks;
	s[j].marks = tempm;
	tempr = s[i].rollno;
	s[i].rollno = s[j].rollno;
	s[j].rollno = tempr;
	strcpy(tempn , s[i].name);
	strcpy(s[i].name , s[j].name);
	strcpy(s[j].name , tempn);
	}
//max =s[i].marks;
//maxno=i;
for(i=0;i<5;i++)
printf("\n%d %s %d",s[i].rollno,s[i].name,s[i].marks);
getch();
}
