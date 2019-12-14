/* program to accept 10 vlaues and send array to function and find out max*/
#include<stdio.h>
#include<conio.h>
int fmax(int []);
void main()
{
int a[10];
int i,max=0;
clrscr();
printf("Enter values\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
max=fmax(a);
printf("Max value =%d",max);
getch();
}
int fmax(int a[])
{
int max=a[0],i;
int *p;
p=a;
for(i=0;i<10;i++,p++)
{
if(max<*p)
max=*p;
}
return(max);
}



