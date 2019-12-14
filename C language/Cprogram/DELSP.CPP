/* Program to count the number of occurances of any two vowel in a line text*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[80]="my   name   is";
 char newstr[80];
 int i,j;
 clrscr();
 printf("Enter a string:");
 //gets(str);
// for(i=0;str[i]!='\0';i++)
// {
//   j = i;
//     while(str[j] == ' ')
//     {
//     if(str[++j]==' ')
//	i = j;
//     else
//	break;
//     }
// printf("%c",str[i]);
//}
for (i=0,j=0;str[i] != '\0';)
  {
   if( (str[i] == ' ') && (str[i+1] == ' ') )
     {
      i = i+2;
     }
   else
     {
     newstr[j] = str[i];
      i++;
      j++;
     }
  }
newstr[j] = '\0';
printf("\n%s",str);
puts(newstr);
}
