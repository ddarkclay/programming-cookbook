#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,j;
clrscr();
scanf("%s",a);
for(i=j=0;a[i] != '\0';i++)
{
    if(a[i] != 'c')
    {
    a[j] = a[i];
    j++;
    }
}
a[j] = '\0';
puts(a);
}
