/* program to copy the contents from 1 file to another file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[]);
void main(int argc,char *argv[])
{
clrscr();
printf("\n%s",argv[0]);
printf("\n%s",argv[1]);
getch();
if(argc !=2){
printf("error");
getch();
exit(0);
}
int i=0;
char *p = argv[1];
printf("%s",p);
while(*p != '\0')
{
i++;
*p++;
}
printf("\nLength=>%d",i);
getch();
}
