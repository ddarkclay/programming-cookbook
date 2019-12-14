#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char dest[20];
 char sour[20];
 int dlen,slen,i,j;
 clrscr();
 printf("Enter a destination string:");
 gets(dest);
 printf("Enter a source string:");
 gets(sour);
 for(j=0;dest[j]!='\0';j++);
 for(i=0;sour[i] !='\0';i++)
    dest[i+j] = sour[i];
 dest[i+j]= '\0';
 puts(dest);
 getch();
}
