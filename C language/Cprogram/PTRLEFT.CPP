#include<stdio.h>
#include<conio.h>
#include<string.h>

void xleft(char *,char *,int);
void xright(char *,char *,int);
void xsubstr(char *,char *,int p,int l);
void main()
{
static char mess[] ={"naralkarinstitue" };
char newmess[10];
clrscr();
printf("%s",mess);
xleft(mess,newmess,5);
printf("\nxleft->%s",newmess);

xright(mess,newmess,6);
printf("\nxright->%s",newmess);

xsubstr(mess,newmess,8,5);
printf("\nxsubstr->%s",newmess);
getch();
}
void xleft(char *s,char *t,int l)
{
int i;
for(i=0;i<l;i++)
{
*t=*s;
t++;
s++;
}
*t='\0';
return;
}
void xright(char *s,char *t,int l)
{
int i;
s=s+strlen(s)-l;
for(i=0;i<l;i++)
{
*t=*s;
t++;
s++;
}
*t='\0';
}
void xsubstr(char *s,char *t,int pos,int n)
{
int i;
s=s+pos-1;
for(i=0;i<n;i++)
{
*t=*s;
t++;
s++;
}
*t='\0';
return;
}



