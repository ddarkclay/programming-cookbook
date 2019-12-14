#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int r,c,max,min;
clrscr();
for(r=9;r>=1;r--)
{
  max=9;
  min=1;
    for(c=1;c<=r;)
   {
   printf("%d ",max--);
   c++;
   if(c<=r)
   printf("%d ",min++);
   c++;
   }
   printf("\n");

}
getch();
}
