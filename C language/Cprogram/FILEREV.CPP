/* program to reverse the contents of file*/
/* random access file*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *f;
char ch;
int i,j;
clrscr();
f=fopen("rohan.TXT","r");
if(f==NULL)
   { puts("can't open the file 'A.txt'");
     fclose(f);
     exit(0);
   }
fseek(f,0l,SEEK_END);
i=ftell(f);
/*printf("%d",i);
j=i*2;
j++;
while(j>0)
{
ch = fgetc(f);
printf("%c",ch);
fseek(f,i-1,SEEK_END);
i=i-1;
j--;
} */
for(long count = 1l;count<=i;count++)
{
fseek(f,-count,SEEK_END);
ch=getc(f);
if(ch != '\r')
putchar(ch);
}
fclose(f);
getch();
}
