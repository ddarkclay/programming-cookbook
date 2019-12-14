#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char dest[15];
char sou[15];
int dlen,slen,s;
clrscr();
printf("Enter dest string\n");
gets(dest);
printf("Enter source string\n");
gets(sou);
dlen=strlen(dest);
slen=strlen(sou);
//printf("%d %d",dlen,slen);
for(;dlen>=0;dlen--)
dest[dlen+slen] = dest[dlen];
puts(dest);
for(s=0;s<slen;s++)
{dest[s]=sou[s];}
puts(dest);
}
