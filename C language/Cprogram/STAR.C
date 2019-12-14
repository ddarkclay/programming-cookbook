#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,p,l,ln = 7;
char ch;
clrscr();
for(r=1;r<=ln;r++)
{
   for(l=1;l<=ln-r;l++)
       printf(" ");
   for(c=1;c<=r;c++)
     {
      if(c % 2 == 0) ch = 'A';
      else ch = '*';
      printf("%c",ch);
     }
      c-=2;
    for(p = c;p>=1;p--)
       {
       if(p % 2 == 0) ch = 'A';
       else ch = '*';
       printf("%c",ch);
       }
printf("\n");
}
getch();
}
