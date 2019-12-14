#include<stdio.h>
#include<conio.h>
void left(char[],int);   /* Actual defination */
void main()
{
char n[20];
char n1[10];
int m;
clrscr();
printf("Enter nos of elements");
scanf("%d",&m);
printf("Enter string");
fflush(stdin);
gets(n);
left(n,m);
/*puts(n1);*/
getch();
}
void left(char a[],int b)
{
int i;
char c[10];
for(i=0;i<b;i++)
{
c[i]=a[i];
}
c[i]='\0';
printf("%s",c);
}

