/* program to sort string array of pointers */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char words[5][10];
char *ptr[5];
int i,j;
clrscr();

/* read the string array */
for(i=0;i<5;i++)
scanf("%s",words[i]);

/* assigning the address of string to ptr array*/
for(i=0;i<5;i++)
ptr[i]=words[i];

/* sorting of an array*/
for(i=0;i<4;i++)
  {
  for(j=i+1;j<5;j++)
    {
    if(strcmp(ptr[i],ptr[j])> 0 )
       {
	char *temp = ptr[i];
	ptr[i]=ptr[j];
	ptr[j]=temp;
	}
      }
   }
/* printing an array*/
for(i=0;i<5;i++)
{
printf("\n %s",ptr[i]);
}
getch();
}

