#include<stdio.h>
#include<conio.h>
void main()
{
char start = 'a',end = 'g',sp;
int i  = -1;
clrscr();

for(end = 'g';end >= 'a';end--,i+=2)
{
   for(start = 'a';start<=end;start++)
       printf("%c",start);
   for(sp = 0;sp<i;sp++)
      printf(" ");
   for(start = (end >='g' ? 'f':end);start>='a';start--)
   printf("%c",start);
   printf("\n");
}
getch();
}