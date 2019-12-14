/* program to copy the string */
#include<stdio.h>
#include<conio.h>
int cmpstring(char * ,char *);
void main()
{
clrscr();
/*fflush(stdin);*/
char string1[20];
char string2[20];
puts("String 1");
gets(string1);
puts("String 2");
gets(string2);
int l = cmpstring(string1,string2);
//printf("%d",l);
if ( l ==  0)
    printf("\nBoth strings are equal");
else if ( l > 0)
    printf("\nFirst String is greater than Second string" );
else if(l < 0)
   printf("\nSecond string is greater than first string");
getch();
}
int cmpstring(char *s,char *t)
{
while(*s==*t)
{
if(*s =='\0' && *t == '\0')
   return (0);
else
   {
   *s++;
   *t++;
   }
}
return(*s - *t);
}







