#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int no1[5]={101,102,103,104,105};
int no2[5]={110,109,108,107,106};
int no3[10];
clrscr();
for(i=0;i<5;i++)
{
no3[i]=no1[i];
}
for(j=0;j<5;j++,i++)
{
no3[i]=no2[j];
}
for(i=0;i<10;i++)
{
printf("%d  ",no3[i]);
}
getch();
}
