/* program to concat to the left*/
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[20];
char s2[20];
int i,j;
clrscr();
printf("source string(s1)");
gets(s1);
printf("target string(s2)");
gets(s2);
for(i=0;s2[i]!= '\0';i++);
for(j=0;s1[j] !='\0';j++,i++)
      {
       s2[i]=s1[j];
      }
s2[i]= '\0';
puts(s2);
}
