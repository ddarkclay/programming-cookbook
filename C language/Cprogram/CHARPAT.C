/*#include<stdio.h>
#include<conio.h>
void main()
{
char r,c;
clrscr();
for(r = 'a';r<='e';r++)
{
     for(c='a';c<=r;c++)
	 printf("%c",c);
     printf("\n");
}
getch();
}*/
#include<stdio.h>
#include<conio.h>
void main()
{
int b ,a,cnt;
b = 2,cnt = 1;
while(cnt<=20)
{ 
   for(a=2;a<b;a++)
   {
      if(b%a==0)
          break;
    }
    if(a==b)
    {
       printf("\t %d",a);
       cnt++;
    }
    b++;
 }
}


