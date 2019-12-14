/* Accept a source file name and destination file name as command line
   argument and copy the contents of source file to destination file */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
 FILE *fs,*ft;
 char ch;
 clrscr();
 if(argc != 3)
 printf("invalid no of arguments");
  fs=fopen(argv[1],"r");
 if(fs == NULL)
 {
  printf("Error in opening file1");
  exit(0);
 }
 ft=fopen(argv[2],"w+");
 if(ft == NULL)
 {
  fclose(fs);
  printf("Error in opening file2");
  exit(0);
 }
 while((ch=getc(fs))!=EOF)
  putc(ch,ft);
 fclose(fs);
 fclose(ft);
 printf("Transfer is over");
 getch();
}