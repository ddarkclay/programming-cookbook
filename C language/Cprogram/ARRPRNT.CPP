#include<stdio.h>
#include<conio.h>
void main()
{
int no[5]= {33,13,56,77,89};
int i;
clrscr();
/*for(i=0;i<5;i++)
{
scanf("%d",&no[i]);
}*/
printf("printing an array");
for(i=1;i<5;i+=2)
{
printf("\t %d",no[i]);
}

getch();
}
