/* program to copy the contents from 1 file to another file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
FILE *fs,*ft;
char ch;
clrscr();
printf("arguments-%d \n",argc);
fs=fopen(argv[1],"r");
if(fs==NULL)
   { puts("can't open the file 1");
     fclose(fs);
     exit(0);
   }
ft=fopen(argv[2],"w+");
if(ft==NULL)
  {
   puts("error in  opening the file2");
   exit(0);
   }
   while(1)
   {
    ch=fgetc(fs);
    if(ch==EOF)
       break;
    else
       fputc(ch,ft);
   }

fclose(fs);
fclose(ft);
}
