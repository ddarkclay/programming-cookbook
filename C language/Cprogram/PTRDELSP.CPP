#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
clrscr();
static char mess[]="my    name   is    sm" ;
char newmess[50];
char *s,*t;
int i,l;
s=mess;
t=newmess;
l=strlen(mess);
clrscr();
for(i=0;i<=l-1;i++)
 {
   if((*s==' ')&&(*(s+1)!=' '))
    {
       *s+=2;
     }
    else
       {
	*t=*s;
	*t++;
	 *s++;
       }
      *t='\0';
}
puts(mess);
puts(newmess) ;
getch();
}
