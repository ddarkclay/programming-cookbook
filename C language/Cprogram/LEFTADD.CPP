/* program to print rotation of characters*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[5];
char b[10];
char ch;
int j,lena,lenb,temp;
clrscr();
printf("enter string for a array-> ");
scanf("%s",a);
printf("enter string for b Array-> ");
scanf("%s",b);
lena=strlen(a);
lena--;
while(lena>=0)
{
    ch=a[lena];
    for(j=0;b[j]!='\0';j++);
    b[j+1]='\0';
    j--;
    while(j>=0)
    {
    b[j+1]=b[j];
    j--;
    }
    j++;
    b[j]=ch;
    lena--;
  }
 puts(b);
 getch();
}








