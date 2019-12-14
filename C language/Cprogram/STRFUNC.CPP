#include<stdio.h>
#include<conio.h>
#include<string.h>


void left(char s1[],int);
void right(char s1[], int m);
void substr(char s1[],int m,int n);
void length(char s1[]);
void str_set(char str1[],char ch);
void lpad(char[],char,int);
void main()
{
char s1[20];
int no;
char c;
int n,m;
clrscr();
printf("FUNCTION LEFT\n");
printf("\n Enter the string=>");
gets(s1);
printf("\n Enter no of character=>");
scanf("%d",&n);
left(s1,n);
getch();
clrscr();
fflush(stdin);

printf("RIGHT FUNCTION");
printf("\n Enter a str=>");
gets(s1);
printf("\n Enter no of char=>");
scanf("%d",&n);
right(s1,n);
getch();
clrscr();
fflush(stdin);

printf("\nSubstring function");
printf("\n Enter the string=");
gets(s1);
printf("\n Enter starting postion=");
scanf("%d",&n);
printf("\n Enter no of charaters=");
scanf("%d",&m);
substr(s1,n,m);
getch();
fflush(stdin);
clrscr();

printf("\nlpad function");
printf("\nEnter a string= ");
gets(s1);
printf("Enter a char= ");
scanf("%c",&c);
printf("Enter a no= ");
scanf("%d",&no);
lpad(s1,c,no);
puts(s1);
getch();
}
void left(char s1[],int n)
{
int i;
char s2[5];
for(i=0;i<n;i++)
{
s2[i]=s1[i];
}
s2[i]='\0';
puts(s2);
}

void right(char s1[], int num)
{
int i,j=0;
char s2[20];
for(i=(strlen(s1)-1);i>num+1;i--)
{s2[j]=s1[i];
j++;}
s2[j]='\0';
printf("\nright char=");
for(j=strlen(s2)-1;j>=0;j--)
printf("%c",s2[j]);
}

void substr(char s1[],int n, int m)
{
int i,j=0;
char s2[20];
n--;
for(i=n;i<=m+n-1;i++)
{
s2[j]=s1[i];
j++;
}
s2[j]='\0';
puts(s2);
}
void lpad(char s1[],char c,int no)
{
int i;
for(i=strlen(s1)-1;i>=0;i--)
s1[i+no]=s1[i];
for(i=0;i<no;i++)
s1[i]=c;
}

