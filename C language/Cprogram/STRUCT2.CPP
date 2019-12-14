/* Structures*/
#include<stdio.h>
#include<conio.h>

static struct st_rec
{
int weight;
float height;
};
void main()
{
static struct st_rec student1={60,170.60};
static struct st_rec student2={50,150.20};
struct st_rec student3;
struct st_rec student4;
student3.weight=student1.weight;
student3.height=student1.height;
//student4=student2;
clrscr();
printf("printing values");
printf("\n%d %f",student1.weight,student1.height);
printf("\n%d %f",student2.weight,student2.height);
printf("\n%d %f",student3.weight,student3.height);
getch();
}


