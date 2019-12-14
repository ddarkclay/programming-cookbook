#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,j;
char temp;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
   for(j=i+1;a[j]!='\0';j++)
     if(a[i] > a[j])
     {
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
     }
}
puts(a);
}
