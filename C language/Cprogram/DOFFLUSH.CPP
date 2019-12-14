#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a,ans;
 do
 {
  fflush(stdin);
  printf("\nEnter a char");
  scanf("%c",&a);
  printf("\n%c %d",a,a);
  printf("\n Another:");
  scanf("\n%c",&ans);
 }while(ans == 'y');
 getch();
 }