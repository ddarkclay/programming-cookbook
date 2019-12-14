#include<stdio.h>
#include<conio.h>
int findchar(char *,char);
void main()
{
char str[]={"abcde ae be de fe re te ye qe pe ge"};
char ch = 'e';
int cnt=0;
cnt=findchar(str, ch);
printf("Count =%d",cnt);
getch();
}
int findchar(char str[],char ch)
{
char *p;
int cnt=0;
//p=str;
for(p=str;*p!='\0';)
 if(*p==ch)
   {
   cnt++;
   }
   *p++;
return(cnt);
}