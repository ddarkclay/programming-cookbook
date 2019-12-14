/* program to sort two-d char array*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[5][10];
char temp[10];
int i,j;
clrscr();
printf(" enter the string in 2-d array\n");
for(i=0;i<5;i++)
{
scanf("\n%s",name[i]);
//printf("%s",name[i]);
}
  for(i=0;i<4;i++)
     {
      for(j=i+1;j<5;j++)
      {
       if(strcmp(name[i],name[j])>0)
	 {
	 strcpy(temp,name[i]);
	 strcpy(name[i],name[j]);
	 strcpy(name[j],temp);
	 }
      }
     }
printf(" sorted array\n");
    for(i=0;i<5;i++)
       printf("\n%s",name[i]);
 getch();
}



