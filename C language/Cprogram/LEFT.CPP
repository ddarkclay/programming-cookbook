/* progran to add to the left the string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char dest[20],sour[10];
 int i,j;
 clrscr();
 printf("Enter destination string :");
 gets(dest);
 printf("Enter source string :");
 gets(sour);
 j=strlen(sour);
 i=strlen(dest);
 for( ;i>=0;i--)
  dest[i+j] = dest[i];
 for(i=0;sour[i]!='\0';i++)
  dest[i] = sour[i];
 printf("%s",dest);
 getch();
}