/* program to print rotation of characters*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[10];
char ch;
int i,len,temp;
clrscr();
scanf("%s",a);
len=strlen(a);
len--;
temp=len;
do{
    puts(a);
    ch=a[0];
    for(i=0;i<len;i++)
    { a[i]=a[i+1]; }
    a[i]=ch;
    a[i+1]='\0';
    temp--;
    } while(temp>=0);
}



