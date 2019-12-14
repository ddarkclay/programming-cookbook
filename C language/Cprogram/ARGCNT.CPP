#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[]);
void main(int argc,char *argv[])
{
clrscr();
if(argc != 3)
printf("error");
printf("%s",argv[0]);
printf("%s",argv[1]);
printf("%s",argv[2]);
getch();
int b=(atoi(argv[1]));
int c=(atoi(argv[2]));
int sum = b+c;
printf("%d",sum);
getch();
}
