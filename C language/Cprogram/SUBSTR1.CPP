#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[20];
// char newarr[10];
 int i,no,st;
 clrscr();
 printf("Enter a string:");
 gets(str);
 printf("\nEnter a Starting pos");
 scanf("%d",&st);
 printf("\nEnter no of characters");
 scanf("%d",&no);
 for(i=st-1;i<=(st+no-1);i++)
    printf("%c",str[i]);
//newarr[i]=str[i];
//newarr[i]='\0';
//printf("%s",newarr);
getch();
}
