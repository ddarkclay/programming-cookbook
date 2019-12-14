/* program to print itself*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
FILE *f1;
char ch;
clrscr();
if(argc!=2)
  {
   printf("Invalid no of arguments");
   exit(0);
  }
f1=fopen(argv[1],"r");
if (f1== NULL)
   { printf("can't open the file %s", argv[0]);
     fclose(f1);
     exit(0);
   }
while(1)
{
ch=fgetc(f1);
if(ch==EOF)
   break;
   fputc(ch,stdout);
}
fclose(f1);
getch();
}
