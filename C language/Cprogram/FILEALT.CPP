/* program to print alternate line in different lines*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int,char *[]);
void main(int argc,char *argv[])
{
FILE *f1;
FILE *f2;
FILE *f3;
char ch;
int i=0;
clrscr();
if(argc!=4)
  {
   printf("Invalid no of arguments");
   exit(1);
  }
f1=fopen(argv[1],"r");
if (f1== NULL)
   { printf("can't open the file %s", argv[1]);
     fclose(f1);
     exit(0);
   }
f2=fopen(argv[2],"a+");
if (f2== NULL)
   { printf("error in %s", argv[2]);
     fclose(f2);
     exit(0);
   }
f3=fopen(argv[3],"a+");
if (f3== NULL)
   { printf("error in file %s", argv[3]);
     fclose(f1);
     exit(0);
   }
while(1)
{
ch=fgetc(f1);
if(ch==EOF)
   break;
if(i%2==0)
   fputc(ch,f2);
else
   fputc(ch,f3);
if(ch=='\n')
i++;
}
fclose(f1);
fclose(f2);
fclose(f3);
getch();
}
