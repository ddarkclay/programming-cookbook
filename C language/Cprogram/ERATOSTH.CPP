/*program to print prime nos*/
#include<stdio.h>
#include<conio.h>
void main()
{
int no[100];
int i,j,k,step;
clrscr();
for(i=0;i<100;i++)
{ no[i] = i+1;}
printf("Printing an array\n");
for(i=1;i<100;i++)
{
   if (no[i] !=0)
   {
     k=no[i]*2-1;
     step=no[i];
     for(j=k;j<100;j=j+step)
       no[j] = 0;
    }
}
for(i=0;i<100;i++)
{
printf("\t%d",no[i]);
}
getch();
}








