#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
int i=0;
int no;
int ar[15];
clrscr();
for(r=1;r<=5;r++)
{
   for(c=1;c<=r;c++)
   {
   if(c==1)
     { no = 1;
      ar[i++] = no;}
   else
      {no = r-1+c;
      ar[i++] = no;
       }
   if(r==c)
      ar[i++] = 1;
    }

}
for(i=0;i<15;i++)
printf("%d ",ar[i]);
getch();
}
