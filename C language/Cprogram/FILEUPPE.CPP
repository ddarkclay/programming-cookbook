/* program to conver the contents from lower to upper*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *f;
char *p;
clrscr();
printf("Enter any string");
gets(p);
f=fopen("a.TXT","a+");
if(f==NULL)
   { puts("can't open the file 'A'");
     fclose(f);
     exit(0);
   }
for(;*p!='\0';p++)
{
if(*p >= 'a' && *p <= 'z')
   *p=*p-32;
    fputc(*p,f);
}
fclose(f);
getch();
}
