/* program to count the character (command line arguments)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int,char *[]);
void main(int argc,char *argv[])
{
FILE *fp;
char ch;
int cnt=0;
clrscr();
printf("%d",argc);
printf("%s",argv[0]);
printf("\n%s",argv[1]);
/*for(int count=0;count<argc;count++){
printf("%s",argv[count]);
printf("\n");
getch();
 }*/
/*if(argc!=2)
  {
   printf("Invalid no of arguments");
   exit(1);
  }*/


fp=fopen(argv[1],"r");
if (fp== NULL)
   { printf("\ncan't open the file %s", argv[1]);
     fclose(fp);
     exit(0);
   }
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
   break;
putc(ch,stdout);
cnt++;
}
fclose(fp);
printf("file has %d characters",cnt);
getch();
}
