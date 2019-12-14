#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char arr[10];
  int len;
  int i;
  clrscr();
  scanf("%s",arr);
  len = strlen(arr);
  while(i<=len)
  {
  printf("%s",arr);
  i++;
  }
  getch();
 }

